module f1_full (
    input logic trigger,  // Whole circuit trigger. E.g. Vbuddy Flag
    input logic clk,
    input logic rst,
    input logic [4:0] N, // Use clktick to scale down internal clock to only produce clock tick every n internal clock cycles  
    output logic [7:0] data_out
);

  logic cmd_seq;
  logic tick;
  logic [6:0] K;
  logic cmd_delay;
  logic mux_out;
  logic time_out;

  clktick my_clktick (
      .clk(clk),
      .rst(rst),
      .en(cmd_seq),
      .N(N),
      .tick(tick)
  );

  lfsr7 my_lfsr (
      .clk(clk),
      .rst(rst),
      .data_out(K)
  );

  delay my_delay (
      .clk(clk),
      .n(K),
      .trigger(cmd_delay),  // delay block is triggered when next state is lights out
      .rst(rst),
      .time_out(time_out)
  );

  mux2 my_mux (
      time_out,
      tick,
      cmd_seq,
      mux_out
  );

  f1_fsm my_f1_fsm (
      .rst(rst),
      .clk(clk),
      .trigger(trigger),
      .en(mux_out),
      .data_out(data_out),
      .cmd_seq(cmd_seq),
      .cmd_delay(cmd_delay)
  );
endmodule
