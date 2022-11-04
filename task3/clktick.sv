module clktick #(
    parameter WIDTH = 16
) (
    // interface signals
    input  logic             clk,  // clock 
    input  logic             rst,  // reset
    input  logic             en,   // enable signal
    input  logic [WIDTH-1:0] N,    // clock divided by N+1
    output logic             tick  // tick output
);

  logic [WIDTH-1:0] count;

  always_ff @(posedge clk)
    if (rst) begin  // Reset down-counter that counts from N to 0 back to N
      tick  <= 1'b0;  // Set tick signal low
      count <= N;
    end else if (en) begin
      if (count == 0) begin  // once down counter reaches zero..
        tick  <= 1'b1;  //.. 'tick' by asserting high to initiate pulse
        count <= N;  // reset its counter back to N
      end else begin
        tick  <= 1'b0;  // if still counting from N to 0 set tick low
        count <= count - 1'b1;  // count down by one
      end
    end
endmodule
