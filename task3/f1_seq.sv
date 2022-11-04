module f1_seq (
    input logic [15:0] N_scale,
    input logic en,
    input logic rst,
    input logic clk,
    output logic [7:0] data_out
);

  logic tick;

  clktick my_clktick (
      .N(N_scale),
      .en(en),
      .rst(rst),
      .clk(clk),
      .tick(tick)
  );

  f1_fsm my_f1_fsm (
      .rst(rst),
      .en(tick),
      .clk(clk),
      .data_out(data_out)
  );

endmodule
