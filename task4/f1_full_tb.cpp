#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_full.h"

#include "vbuddy.cpp" // include vbuddy code
#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env)
{
    int simcyc; // simulation clock count
    int tick;   // each clk cycle has two ticks for two edges

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vf1_full *top = new Vf1_full;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("f1_full.vcd");

    // init Vbuddy
    if (vbdOpen() != 1)
        return (-1);
    vbdHeader("L3T4: F1LightSeq");

    // initialize simulation input
    top->clk = 1;
    top->rst = 1; // can be initialised as anything?
    top->trigger = 0;
    // NOTE N value for 1 second appears to be different than in previous tasks?
    top->N = vbdValue(); // N scaler (per laptop) such that a tick runs ever N+1 clock cycles where N is the number of clock cycles that take 1 second to complete
    vbdSetMode(1);       // need trigger edge

    int lights_state_before = 0; // tracks if lights are all on before clocking module
    int lights_state_after = 1;  // .. after clocking module
    // run simulation for MAX_SIM_CYC clock cycles
    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {

        top->rst = (simcyc < 2);
        top->trigger = vbdFlag();
        top->N = vbdValue();
        if (top->data_out == 0xFF)
        {
            lights_state_before = 1;
        }
        else
        {
            lights_state_before = 0;
        }
        // dump variables into VCD file and toggle clock
        for (tick = 0; tick < 2; tick++)
        {
            tfp->dump(2 * simcyc + tick);
            top->clk = !top->clk;
            top->eval();
        }
        if ((top->data_out != 0xFF) && (lights_state_before)) // if lights were not all on after the module was clocked but they were all on before then the lights have just gone out..
        {
            vbdInitWatch(); // so start stopwatch
        }

        vbdHex(1, vbdElapsed() / 1000); // Elapsed is time since stopwatch init to Rotary button press??

        // display on neopixel strip
        vbdBar(top->data_out & 0xFF);

        vbdCycle(simcyc);

        // either simulation finished, or 'q' is pressed
        if ((Verilated::gotFinish()) || (vbdGetkey() == 'q'))
            exit(0);
    }

    vbdClose(); // ++++
    tfp->close();
    printf("Exiting\n");
    exit(0);
}
