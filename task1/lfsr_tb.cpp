#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vlfsr.h"

#include "vbuddy.cpp" // include vbuddy code
#define MAX_SIM_CYC 1000000
#define ADDRESS_WIDTH 9
#define RAM_SZ pow(2, ADDRESS_WIDTH)

int main(int argc, char **argv, char **env)
{
    int simcyc; // simulation clock count
    int tick;   // each clk cycle has two ticks for two edges

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vlfsr *top = new Vlfsr;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("lfsr.vcd");

    // init Vbuddy
    if (vbdOpen() != 1)
        return (-1);
    vbdHeader("L3T1:Delay");

    // initialize simulation input
    top->clk = 1;
    top->rst = 1;
    top->en = 1;
    vbdSetMode(1); // One-shot mode

    // run simulation for MAX_SIM_CYC clock cycles
    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        top->en = vbdFlag();     // Only execute linear feedback shift register operation when flag raised high
        top->rst = (simcyc < 2); // effectively set reset high at start of simulation in order to start d_out non-zero, and have zero for rest of simulation

        // dump variables into VCD file and toggle clock
        for (tick = 0; tick < 2; tick++)
        {
            tfp->dump(2 * simcyc + tick);
            top->clk = !top->clk;
            top->eval();
        }

        // display 4-bit random number on 7-segment display
        vbdHex(1, top->data_out & 0xF);
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
