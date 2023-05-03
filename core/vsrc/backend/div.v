/*
* is 32-bit div, use chisel to design ,and convert chisel code to verilog code
*/

module DIV(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input         io_in_bits_ctrl_flow_divw,
  input         io_in_bits_ctrl_flow_div_signed,
  input         io_in_bits_ctrl_flow_flush,
  input  [31:0] io_in_bits_ctrl_data_src1,
  input  [31:0] io_in_bits_ctrl_data_src2,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_result_quotient,
  output [31:0] io_out_bits_result_remainder
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] dividend; // @[DIV.scala 15:25]
  reg [31:0] divisor; // @[DIV.scala 16:24]
  reg [31:0] S; // @[DIV.scala 17:18]
  reg [1:0] state; // @[DIV.scala 23:22]
  wire  _T = state == 2'h1; // @[DIV.scala 24:33]
  reg [4:0] count; // @[Counter.scala 61:40]
  wire  wrap_wrap = count == 5'h1f; // @[Counter.scala 73:24]
  wire [4:0] _wrap_value_T_1 = count + 5'h1; // @[Counter.scala 77:24]
  wire  s = _T & wrap_wrap; // @[Counter.scala 118:{16,23}]
  wire [32:0] _res_div_T_1 = {1'h0,divisor}; // @[Cat.scala 33:92]
  wire [32:0] res_div = dividend[63:31] - _res_div_T_1; // @[DIV.scala 25:49]
  wire [1:0] _GEN_2 = state == 2'h0 ? 2'h1 : state; // @[DIV.scala 27:25 28:13 23:22]
  wire [31:0] _dividend_T_4 = 32'h0 - io_in_bits_ctrl_data_src1; // @[DIV.scala 43:87]
  wire [31:0] _dividend_T_5 = io_in_bits_ctrl_flow_div_signed & io_in_bits_ctrl_data_src1[31] ? _dividend_T_4 :
    io_in_bits_ctrl_data_src1; // @[DIV.scala 43:12]
  wire [63:0] _dividend_T_6 = {32'h0,_dividend_T_5}; // @[Cat.scala 33:92]
  wire [31:0] _divisor_T_3 = 32'h0 - io_in_bits_ctrl_data_src2; // @[DIV.scala 44:96]
  wire  _S_T_1 = ~res_div[32]; // @[DIV.scala 48:35]
  wire [31:0] _S_T_3 = {S[31:1],1'h1}; // @[Cat.scala 33:92]
  wire [31:0] _S_T_5 = {S[31:1],1'h0}; // @[Cat.scala 33:92]
  wire [31:0] _S_T_6 = ~res_div[32] ? _S_T_3 : _S_T_5; // @[DIV.scala 48:17]
  wire [32:0] _S_T_7 = {_S_T_6, 1'h0}; // @[DIV.scala 49:79]
  wire [32:0] _GEN_6 = count != 5'h1f ? _S_T_7 : {{1'd0}, _S_T_6}; // @[DIV.scala 47:36 48:11 51:11]
  wire [63:0] _dividend_T_14 = {res_div,dividend[30:0]}; // @[Cat.scala 33:92]
  wire [63:0] _dividend_T_15 = _S_T_1 ? _dividend_T_14 : dividend; // @[DIV.scala 54:22]
  wire [64:0] _dividend_T_16 = {_dividend_T_15, 1'h0}; // @[DIV.scala 55:110]
  wire [32:0] _GEN_7 = 2'h1 == state ? _GEN_6 : {{1'd0}, S}; // @[DIV.scala 40:16 17:18]
  wire [64:0] _GEN_8 = 2'h1 == state ? _dividend_T_16 : {{1'd0}, dividend}; // @[DIV.scala 40:16 54:16 15:25]
  wire [64:0] _GEN_9 = 2'h0 == state ? {{1'd0}, _dividend_T_6} : _GEN_8; // @[DIV.scala 40:16 42:16]
  wire [32:0] _GEN_11 = 2'h0 == state ? {{1'd0}, S} : _GEN_7; // @[DIV.scala 40:16 17:18]
  wire [31:0] negative_s = 32'h0 - S; // @[DIV.scala 63:20]
  wire [31:0] negative_r = 32'h0 - dividend[63:32]; // @[DIV.scala 64:20]
  wire [31:0] _T_13 = S[31] ? negative_s : S; // @[DIV.scala 67:18]
  wire [31:0] _T_16 = dividend[63] ? negative_r : dividend[63:32]; // @[DIV.scala 67:49]
  wire [31:0] _T_18 = S[31] ? S : negative_s; // @[DIV.scala 68:18]
  wire [31:0] _T_26 = dividend[63] ? dividend[63:32] : negative_r; // @[DIV.scala 69:49]
  wire [1:0] _s_o_T_2 = {io_in_bits_ctrl_data_src1[31],io_in_bits_ctrl_data_src2[31]}; // @[Cat.scala 33:92]
  wire  _s_o_T_3 = 2'h0 == _s_o_T_2; // @[util.scala 31:32]
  wire  _s_o_T_4 = 2'h1 == _s_o_T_2; // @[util.scala 31:32]
  wire  _s_o_T_5 = 2'h2 == _s_o_T_2; // @[util.scala 31:32]
  wire  _s_o_T_6 = 2'h3 == _s_o_T_2; // @[util.scala 31:32]
  wire [31:0] _s_o_T_7 = _s_o_T_3 ? _T_13 : 32'h0; // @[Mux.scala 27:73]
  wire [31:0] _s_o_T_8 = _s_o_T_4 ? _T_18 : 32'h0; // @[Mux.scala 27:73]
  wire [31:0] _s_o_T_9 = _s_o_T_5 ? _T_18 : 32'h0; // @[Mux.scala 27:73]
  wire [31:0] _s_o_T_10 = _s_o_T_6 ? _T_13 : 32'h0; // @[Mux.scala 27:73]
  wire [31:0] _s_o_T_11 = _s_o_T_7 | _s_o_T_8; // @[Mux.scala 27:73]
  wire [31:0] _s_o_T_12 = _s_o_T_11 | _s_o_T_9; // @[Mux.scala 27:73]
  wire [31:0] s_o = _s_o_T_12 | _s_o_T_10; // @[Mux.scala 27:73]
  wire [31:0] _r_o_T_7 = _s_o_T_3 ? _T_16 : 32'h0; // @[Mux.scala 27:73]
  wire [31:0] _r_o_T_8 = _s_o_T_4 ? _T_16 : 32'h0; // @[Mux.scala 27:73]
  wire [31:0] _r_o_T_9 = _s_o_T_5 ? _T_26 : 32'h0; // @[Mux.scala 27:73]
  wire [31:0] _r_o_T_10 = _s_o_T_6 ? _T_26 : 32'h0; // @[Mux.scala 27:73]
  wire [31:0] _r_o_T_11 = _r_o_T_7 | _r_o_T_8; // @[Mux.scala 27:73]
  wire [31:0] _r_o_T_12 = _r_o_T_11 | _r_o_T_9; // @[Mux.scala 27:73]
  wire [31:0] r_o = _r_o_T_12 | _r_o_T_10; // @[Mux.scala 27:73]
  wire [64:0] _GEN_12 = reset ? 65'h0 : _GEN_9; // @[DIV.scala 15:{25,25}]
  wire [32:0] _GEN_13 = reset ? 33'h0 : _GEN_11; // @[DIV.scala 17:{18,18}]
  assign io_in_ready = 1'h1; // @[DIV.scala 75:15]
  assign io_out_valid = state == 2'h2; // @[DIV.scala 76:29]
  assign io_out_bits_result_quotient = io_in_bits_ctrl_flow_div_signed ? s_o : S; // @[DIV.scala 77:37]
  assign io_out_bits_result_remainder = io_in_bits_ctrl_flow_div_signed ? r_o : dividend[63:32]; // @[DIV.scala 78:38]
  always @(posedge clock) begin
    dividend <= _GEN_12[63:0]; // @[DIV.scala 15:{25,25}]
    if (reset) begin // @[DIV.scala 16:24]
      divisor <= 32'h0; // @[DIV.scala 16:24]
    end else if (2'h0 == state) begin // @[DIV.scala 40:16]
      if (io_in_bits_ctrl_flow_div_signed & io_in_bits_ctrl_data_src2[31]) begin // @[DIV.scala 44:21]
        divisor <= _divisor_T_3;
      end else begin
        divisor <= io_in_bits_ctrl_data_src2;
      end
    end
    S <= _GEN_13[31:0]; // @[DIV.scala 17:{18,18}]
    if (reset) begin // @[DIV.scala 23:22]
      state <= 2'h0; // @[DIV.scala 23:22]
    end else if (io_in_valid & ~io_in_bits_ctrl_flow_flush) begin // @[DIV.scala 26:51]
      if (state == 2'h2) begin // @[DIV.scala 33:24]
        state <= 2'h0; // @[DIV.scala 34:13]
      end else if (_T & s) begin // @[DIV.scala 30:40]
        state <= 2'h2; // @[DIV.scala 31:15]
      end else begin
        state <= _GEN_2;
      end
    end else begin
      state <= 2'h0; // @[DIV.scala 37:11]
    end
    if (reset) begin // @[Counter.scala 61:40]
      count <= 5'h0; // @[Counter.scala 61:40]
    end else if (_T) begin // @[Counter.scala 118:16]
      count <= _wrap_value_T_1; // @[Counter.scala 77:15]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  dividend = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  divisor = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  S = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  state = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  count = _RAND_4[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule