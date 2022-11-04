module f1_fsm (
    input logic clk,
    input logic rst,
    input logic en,
    output logic [7:0] data_out
);

  logic [7:0] out;
  // Define our states
  typedef enum {
    S0,
    S1,
    S2,
    S3,
    S4,
    S5,
    S6,
    S7,
    S8
  } my_state;
  my_state current_state, next_state;  // instantiane two state objects

  // state registers
  always_ff @(posedge clk, posedge rst) begin
    if (rst) current_state <= S0;  // RST back to state 0
    if (en) current_state <= next_state;  // if enable pressed, advance state
  end
  //next state logic
  always_comb
    case (current_state)
      S0: begin
        next_state = S1;
        out = 8'b0;
      end
      S1: begin
        next_state = S2;
        out = 8'b1;
      end
      S2: begin
        next_state = S3;
        out = 8'b11;
      end
      S3: begin
        next_state = S4;
        out = 8'b111;
      end
      S4: begin
        next_state = S5;
        out = 8'b1111;
      end
      S5: begin
        next_state = S6;
        out = 8'b11111;
      end
      S6: begin
        next_state = S7;
        out = 8'b111111;
      end
      S7: begin
        next_state = S8;
        out = 8'b1111111;
      end
      S8: begin
        next_state = S0;
        out = 8'b11111111;
      end
      default: begin
        next_state = S0;
        out = 8'b11111111;
      end  // in any other scenario 'reset' to S0
    endcase

  // output logic
  assign data_out = out;
endmodule
