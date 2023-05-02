/*
* this is booth-2 multiplier,use scala to convert verilog,this is verilog
*
*/

module Partial_product(
  input  [2:0]   io_y_3,
  input  [139:0] io_x,
  output [139:0] io_p,
  output         io_c
);
  wire  _io_p_T = io_y_3 == 3'h0; // @[MUL.scala 28:13]
  wire  _io_p_T_1 = io_y_3 == 3'h1; // @[MUL.scala 29:13]
  wire  _io_p_T_2 = io_y_3 == 3'h2; // @[MUL.scala 30:13]
  wire  _io_p_T_3 = io_y_3 == 3'h3; // @[MUL.scala 31:13]
  wire [140:0] _io_p_T_4 = {io_x, 1'h0}; // @[MUL.scala 31:36]
  wire  _io_p_T_5 = io_y_3 == 3'h4; // @[MUL.scala 32:13]
  wire [140:0] _io_p_T_7 = ~_io_p_T_4; // @[MUL.scala 32:31]
  wire  _io_p_T_8 = io_y_3 == 3'h5; // @[MUL.scala 33:13]
  wire [139:0] _io_p_T_9 = ~io_x; // @[MUL.scala 33:32]
  wire  _io_p_T_10 = io_y_3 == 3'h6; // @[MUL.scala 34:13]
  wire [139:0] _io_p_T_14 = _io_p_T_10 ? _io_p_T_9 : 140'h0; // @[Mux.scala 101:16]
  wire [139:0] _io_p_T_15 = _io_p_T_8 ? _io_p_T_9 : _io_p_T_14; // @[Mux.scala 101:16]
  wire [140:0] _io_p_T_16 = _io_p_T_5 ? _io_p_T_7 : {{1'd0}, _io_p_T_15}; // @[Mux.scala 101:16]
  wire [140:0] _io_p_T_17 = _io_p_T_3 ? _io_p_T_4 : _io_p_T_16; // @[Mux.scala 101:16]
  wire [140:0] _io_p_T_18 = _io_p_T_2 ? {{1'd0}, io_x} : _io_p_T_17; // @[Mux.scala 101:16]
  wire [140:0] _io_p_T_19 = _io_p_T_1 ? {{1'd0}, io_x} : _io_p_T_18; // @[Mux.scala 101:16]
  wire [140:0] _io_p_T_20 = _io_p_T ? 141'h0 : _io_p_T_19; // @[Mux.scala 101:16]
  wire  _io_c_T_12 = _io_p_T_3 ? 1'h0 : _io_p_T_5 | (_io_p_T_8 | _io_p_T_10); // @[Mux.scala 101:16]
  wire  _io_c_T_13 = _io_p_T_2 ? 1'h0 : _io_c_T_12; // @[Mux.scala 101:16]
  wire  _io_c_T_14 = _io_p_T_1 ? 1'h0 : _io_c_T_13; // @[Mux.scala 101:16]
  assign io_p = _io_p_T_20[139:0]; // @[MUL.scala 27:8]
  assign io_c = _io_p_T ? 1'h0 : _io_c_T_14; // @[Mux.scala 101:16]
endmodule
module Booth_MUL(
  input         clock,
  input         reset,
  input         io_in_valid,
  input         io_in_bits_ctrl_flow_flush,
  input         io_in_bits_ctrl_flow_mulw,
  input  [1:0]  io_in_bits_ctrl_flow_mul_sign,
  input  [63:0] io_in_bits_ctrl_data_src1,
  input  [63:0] io_in_bits_ctrl_data_src2,
  output        io_out_valid,
  output [63:0] io_out_bits_result_result_hi,
  output [63:0] io_out_bits_result_result_lo
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [95:0] _RAND_1;
  reg [95:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire [2:0] partial_io_y_3; // @[MUL.scala 136:23]
  wire [139:0] partial_io_x; // @[MUL.scala 136:23]
  wire [139:0] partial_io_p; // @[MUL.scala 136:23]
  wire  partial_io_c; // @[MUL.scala 136:23]
  reg [33:0] multiplier; // @[MUL.scala 132:27]
  reg [67:0] multiplicand; // @[MUL.scala 133:29]
  reg [67:0] p; // @[MUL.scala 134:18]
  reg [5:0] count; // @[MUL.scala 135:22]
  wire  _src1_T = 2'h0 == io_in_bits_ctrl_flow_mul_sign; // @[util.scala 31:32]
  wire  _src1_T_1 = 2'h1 == io_in_bits_ctrl_flow_mul_sign; // @[util.scala 31:32]
  wire  _src1_T_2 = 2'h3 == io_in_bits_ctrl_flow_mul_sign; // @[util.scala 31:32]
  wire [32:0] _src1_T_3 = _src1_T ? io_in_bits_ctrl_data_src1[32:0] : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _src1_T_4 = _src1_T_1 ? io_in_bits_ctrl_data_src1[32:0] : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _src1_T_5 = _src1_T_2 ? io_in_bits_ctrl_data_src1[32:0] : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _src1_T_6 = _src1_T_3 | _src1_T_4; // @[Mux.scala 27:73]
  wire [32:0] src1 = _src1_T_6 | _src1_T_5; // @[Mux.scala 27:73]
  wire [32:0] _src2_T_3 = _src1_T ? io_in_bits_ctrl_data_src2[32:0] : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _src2_T_4 = _src1_T_1 ? io_in_bits_ctrl_data_src2[32:0] : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _src2_T_5 = _src1_T_2 ? io_in_bits_ctrl_data_src2[32:0] : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _src2_T_6 = _src2_T_3 | _src2_T_4; // @[Mux.scala 27:73]
  wire [32:0] src2 = _src2_T_6 | _src2_T_5; // @[Mux.scala 27:73]
  wire  _count_T_1 = ~io_in_bits_ctrl_flow_flush & io_in_valid; // @[MUL.scala 148:44]
  wire [5:0] _count_T_5 = count + 6'h2; // @[MUL.scala 148:81]
  wire [33:0] _multiplier_T = {src2,1'h0}; // @[Cat.scala 33:92]
  wire [67:0] _multiplicand_T_1 = {1'h0,src1,34'h0}; // @[Cat.scala 33:92]
  wire [139:0] _GEN_6 = {{72'd0}, p}; // @[MUL.scala 156:14]
  wire [139:0] _p_T_1 = _GEN_6 + partial_io_p; // @[MUL.scala 156:14]
  wire [139:0] _GEN_7 = {{139'd0}, partial_io_c}; // @[MUL.scala 156:24]
  wire [139:0] _p_T_3 = _p_T_1 + _GEN_7; // @[MUL.scala 156:24]
  wire [137:0] _GEN_2 = count == 6'h0 ? 138'h0 : _p_T_3[139:2]; // @[MUL.scala 150:25 153:9 156:9]
  wire [137:0] _GEN_5 = _count_T_1 ? _GEN_2 : {{70'd0}, p}; // @[MUL.scala 134:18 149:51]
  wire [137:0] _GEN_8 = reset ? 138'h0 : _GEN_5; // @[MUL.scala 134:{18,18}]
  Partial_product partial ( // @[MUL.scala 136:23]
    .io_y_3(partial_io_y_3),
    .io_x(partial_io_x),
    .io_p(partial_io_p),
    .io_c(partial_io_c)
  );
  assign io_out_valid = count == 6'h24 & io_in_bits_ctrl_flow_mulw | count == 6'h24; // @[MUL.scala 164:84]
  assign io_out_bits_result_result_hi = {{32'd0}, p[63:32]}; // @[MUL.scala 166:32]
  assign io_out_bits_result_result_lo = {{32'd0}, p[31:0]}; // @[MUL.scala 167:32]
  assign partial_io_y_3 = multiplier[2:0]; // @[MUL.scala 161:31]
  assign partial_io_x = {{72'd0}, multiplicand}; // @[MUL.scala 162:16]
  always @(posedge clock) begin
    if (reset) begin // @[MUL.scala 132:27]
      multiplier <= 34'h0; // @[MUL.scala 132:27]
    end else if (_count_T_1) begin // @[MUL.scala 149:51]
      if (count == 6'h0) begin // @[MUL.scala 150:25]
        multiplier <= _multiplier_T; // @[MUL.scala 151:18]
      end else begin
        multiplier <= {{2'd0}, multiplier[33:2]}; // @[MUL.scala 157:18]
      end
    end
    if (reset) begin // @[MUL.scala 133:29]
      multiplicand <= 68'h0; // @[MUL.scala 133:29]
    end else if (_count_T_1) begin // @[MUL.scala 149:51]
      if (count == 6'h0) begin // @[MUL.scala 150:25]
        multiplicand <= _multiplicand_T_1; // @[MUL.scala 152:20]
      end
    end
    p <= _GEN_8[67:0]; // @[MUL.scala 134:{18,18}]
    if (reset) begin // @[MUL.scala 135:22]
      count <= 6'h0; // @[MUL.scala 135:22]
    end else if (~io_in_bits_ctrl_flow_flush & io_in_valid & ~io_out_valid) begin // @[MUL.scala 148:15]
      count <= _count_T_5;
    end else begin
      count <= 6'h0;
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
  multiplier = _RAND_0[33:0];
  _RAND_1 = {3{`RANDOM}};
  multiplicand = _RAND_1[67:0];
  _RAND_2 = {3{`RANDOM}};
  p = _RAND_2[67:0];
  _RAND_3 = {1{`RANDOM}};
  count = _RAND_3[5:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MUL(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input         io_in_bits_ctrl_flow_flush,
  input         io_in_bits_ctrl_flow_mulw,
  input  [1:0]  io_in_bits_ctrl_flow_mul_sign,
  input  [63:0] io_in_bits_ctrl_data_src1,
  input  [63:0] io_in_bits_ctrl_data_src2,
  input         io_out_ready,
  output        io_out_valid,
  output [63:0] io_out_bits_result_result_hi,
  output [63:0] io_out_bits_result_result_lo
);
  wire  mult_clock; // @[MUL.scala 202:24]
  wire  mult_reset; // @[MUL.scala 202:24]
  wire  mult_io_in_valid; // @[MUL.scala 202:24]
  wire  mult_io_in_bits_ctrl_flow_flush; // @[MUL.scala 202:24]
  wire  mult_io_in_bits_ctrl_flow_mulw; // @[MUL.scala 202:24]
  wire [1:0] mult_io_in_bits_ctrl_flow_mul_sign; // @[MUL.scala 202:24]
  wire [63:0] mult_io_in_bits_ctrl_data_src1; // @[MUL.scala 202:24]
  wire [63:0] mult_io_in_bits_ctrl_data_src2; // @[MUL.scala 202:24]
  wire  mult_io_out_valid; // @[MUL.scala 202:24]
  wire [63:0] mult_io_out_bits_result_result_hi; // @[MUL.scala 202:24]
  wire [63:0] mult_io_out_bits_result_result_lo; // @[MUL.scala 202:24]
  Booth_MUL mult ( // @[MUL.scala 202:24]
    .clock(mult_clock),
    .reset(mult_reset),
    .io_in_valid(mult_io_in_valid),
    .io_in_bits_ctrl_flow_flush(mult_io_in_bits_ctrl_flow_flush),
    .io_in_bits_ctrl_flow_mulw(mult_io_in_bits_ctrl_flow_mulw),
    .io_in_bits_ctrl_flow_mul_sign(mult_io_in_bits_ctrl_flow_mul_sign),
    .io_in_bits_ctrl_data_src1(mult_io_in_bits_ctrl_data_src1),
    .io_in_bits_ctrl_data_src2(mult_io_in_bits_ctrl_data_src2),
    .io_out_valid(mult_io_out_valid),
    .io_out_bits_result_result_hi(mult_io_out_bits_result_result_hi),
    .io_out_bits_result_result_lo(mult_io_out_bits_result_result_lo)
  );
  assign io_in_ready = 1'h1; // @[MUL.scala 203:13]
  assign io_out_valid = mult_io_out_valid; // @[MUL.scala 204:14]
  assign io_out_bits_result_result_hi = mult_io_out_bits_result_result_hi; // @[MUL.scala 204:14]
  assign io_out_bits_result_result_lo = mult_io_out_bits_result_result_lo; // @[MUL.scala 204:14]
  assign mult_clock = clock;
  assign mult_reset = reset;
  assign mult_io_in_valid = io_in_valid; // @[MUL.scala 203:13]
  assign mult_io_in_bits_ctrl_flow_flush = io_in_bits_ctrl_flow_flush; // @[MUL.scala 203:13]
  assign mult_io_in_bits_ctrl_flow_mulw = io_in_bits_ctrl_flow_mulw; // @[MUL.scala 203:13]
  assign mult_io_in_bits_ctrl_flow_mul_sign = io_in_bits_ctrl_flow_mul_sign; // @[MUL.scala 203:13]
  assign mult_io_in_bits_ctrl_data_src1 = io_in_bits_ctrl_data_src1; // @[MUL.scala 203:13]
  assign mult_io_in_bits_ctrl_data_src2 = io_in_bits_ctrl_data_src2; // @[MUL.scala 203:13]
endmodule


/*then is scala code*/

