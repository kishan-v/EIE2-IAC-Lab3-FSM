module lfsr7 (
    input logic clk,
    input logic rst,
    output logic [6:0] data_out
);

  // implementing primitive polynomial order 7. An example providing maximum length before sequence repetition:
  // 1 + x^3 + x^7 
  logic [7:1] sreg;
  always_ff @(posedge clk) begin
    if (rst) sreg <= 7'b1;  // upon RST value resets to this. Can be anything non-zero
    else sreg <= {sreg[6:1], sreg[3] ^  /* XOR */ sreg[7]};
  end


  assign data_out = sreg;

endmodule
