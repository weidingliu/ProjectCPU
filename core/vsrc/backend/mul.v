/*
* this is booth-2 multiplier,use chisel to convert verilog,here is verilog code
*
*/

module Partial_product(
  input  [2:0]  io_y_3,
  input  [67:0] io_x,
  output [67:0] io_p,
  output        io_c
);
  wire  _io_p_T = io_y_3 == 3'h0; // @[MUL.scala 26:13]
  wire  _io_p_T_1 = io_y_3 == 3'h1; // @[MUL.scala 27:13]
  wire  _io_p_T_2 = io_y_3 == 3'h2; // @[MUL.scala 28:13]
  wire  _io_p_T_3 = io_y_3 == 3'h3; // @[MUL.scala 29:13]
  wire [68:0] _io_p_T_4 = {io_x, 1'h0}; // @[MUL.scala 29:36]
  wire  _io_p_T_5 = io_y_3 == 3'h4; // @[MUL.scala 30:13]
  wire [68:0] _io_p_T_7 = ~_io_p_T_4; // @[MUL.scala 30:31]
  wire  _io_p_T_8 = io_y_3 == 3'h5; // @[MUL.scala 31:13]
  wire [67:0] _io_p_T_9 = ~io_x; // @[MUL.scala 31:32]
  wire  _io_p_T_10 = io_y_3 == 3'h6; // @[MUL.scala 32:13]
  wire [67:0] _io_p_T_14 = _io_p_T_10 ? _io_p_T_9 : 68'h0; // @[Mux.scala 101:16]
  wire [67:0] _io_p_T_15 = _io_p_T_8 ? _io_p_T_9 : _io_p_T_14; // @[Mux.scala 101:16]
  wire [68:0] _io_p_T_16 = _io_p_T_5 ? _io_p_T_7 : {{1'd0}, _io_p_T_15}; // @[Mux.scala 101:16]
  wire [68:0] _io_p_T_17 = _io_p_T_3 ? _io_p_T_4 : _io_p_T_16; // @[Mux.scala 101:16]
  wire [68:0] _io_p_T_18 = _io_p_T_2 ? {{1'd0}, io_x} : _io_p_T_17; // @[Mux.scala 101:16]
  wire [68:0] _io_p_T_19 = _io_p_T_1 ? {{1'd0}, io_x} : _io_p_T_18; // @[Mux.scala 101:16]
  wire [68:0] _io_p_T_20 = _io_p_T ? 69'h0 : _io_p_T_19; // @[Mux.scala 101:16]
  wire  _io_c_T_12 = _io_p_T_3 ? 1'h0 : _io_p_T_5 | (_io_p_T_8 | _io_p_T_10); // @[Mux.scala 101:16]
  wire  _io_c_T_13 = _io_p_T_2 ? 1'h0 : _io_c_T_12; // @[Mux.scala 101:16]
  wire  _io_c_T_14 = _io_p_T_1 ? 1'h0 : _io_c_T_13; // @[Mux.scala 101:16]
  assign io_p = _io_p_T_20[67:0]; // @[MUL.scala 25:8]
  assign io_c = _io_p_T ? 1'h0 : _io_c_T_14; // @[Mux.scala 101:16]
endmodule
module Booth_MUL(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input         io_in_bits_ctrl_flow_flush,
  input         io_in_bits_ctrl_flow_mulw,
  input  [1:0]  io_in_bits_ctrl_flow_mul_sign,
  input  [31:0] io_in_bits_ctrl_data_src1,
  input  [31:0] io_in_bits_ctrl_data_src2,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_result_result_hi,
  output [31:0] io_out_bits_result_result_lo
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [95:0] _RAND_1;
  reg [95:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire [2:0] partial_io_y_3; // @[MUL.scala 134:23]
  wire [67:0] partial_io_x; // @[MUL.scala 134:23]
  wire [67:0] partial_io_p; // @[MUL.scala 134:23]
  wire  partial_io_c; // @[MUL.scala 134:23]
  reg [33:0] multiplier; // @[MUL.scala 130:27]
  reg [67:0] multiplicand; // @[MUL.scala 131:29]
  reg [67:0] p; // @[MUL.scala 132:18]
  reg [5:0] count; // @[MUL.scala 133:22]
  wire  sign = io_in_bits_ctrl_data_src1[31]; // @[util.scala 10:19]
  wire [32:0] _T = {sign,io_in_bits_ctrl_data_src1}; // @[Cat.scala 33:92]
  wire  sign_1 = io_in_bits_ctrl_data_src2[31]; // @[util.scala 10:19]
  wire [32:0] _T_1 = {sign_1,io_in_bits_ctrl_data_src2}; // @[Cat.scala 33:92]
  wire [32:0] _T_3 = {1'h0,io_in_bits_ctrl_data_src2}; // @[Cat.scala 33:92]
  wire [32:0] _T_4 = {1'h0,io_in_bits_ctrl_data_src1}; // @[Cat.scala 33:92]
  wire  _src1_T = 2'h0 == io_in_bits_ctrl_flow_mul_sign; // @[util.scala 31:32]
  wire  _src1_T_1 = 2'h1 == io_in_bits_ctrl_flow_mul_sign; // @[util.scala 31:32]
  wire  _src1_T_2 = 2'h3 == io_in_bits_ctrl_flow_mul_sign; // @[util.scala 31:32]
  wire [32:0] _src1_T_3 = _src1_T ? _T : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _src1_T_4 = _src1_T_1 ? _T : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _src1_T_5 = _src1_T_2 ? _T_4 : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _src1_T_6 = _src1_T_3 | _src1_T_4; // @[Mux.scala 27:73]
  wire [32:0] src1 = _src1_T_6 | _src1_T_5; // @[Mux.scala 27:73]
  wire [32:0] _src2_T_3 = _src1_T ? _T_1 : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _src2_T_4 = _src1_T_1 ? _T_3 : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _src2_T_5 = _src1_T_2 ? _T_3 : 33'h0; // @[Mux.scala 27:73]
  wire [32:0] _src2_T_6 = _src2_T_3 | _src2_T_4; // @[Mux.scala 27:73]
  wire [32:0] src2 = _src2_T_6 | _src2_T_5; // @[Mux.scala 27:73]
  wire  _count_T_1 = ~io_in_bits_ctrl_flow_flush & io_in_valid; // @[MUL.scala 146:44]
  wire [5:0] _count_T_5 = count + 6'h2; // @[MUL.scala 146:81]
  wire [33:0] _multiplier_T = {src2,1'h0}; // @[Cat.scala 33:92]
  wire [67:0] _multiplicand_T_1 = {1'h0,src1,34'h0}; // @[Cat.scala 33:92]
  wire [67:0] _temp_T_1 = p + partial_io_p; // @[MUL.scala 154:18]
  wire [67:0] _GEN_6 = {{67'd0}, partial_io_c}; // @[MUL.scala 154:28]
  wire [67:0] temp = _temp_T_1 + _GEN_6; // @[MUL.scala 154:28]
  wire  p_sign = temp[67]; // @[util.scala 10:19]
  wire [1:0] _p_T_2 = p_sign ? 2'h3 : 2'h0; // @[Bitwise.scala 77:12]
  wire [67:0] _p_T_3 = {_p_T_2,temp[67:2]}; // @[Cat.scala 33:92]
  Partial_product partial ( // @[MUL.scala 134:23]
    .io_y_3(partial_io_y_3),
    .io_x(partial_io_x),
    .io_p(partial_io_p),
    .io_c(partial_io_c)
  );
  assign io_in_ready = 1'h1; // @[MUL.scala 164:15]
  assign io_out_valid = count == 6'h24 & io_in_bits_ctrl_flow_mulw | count == 6'h24; // @[MUL.scala 163:84]
  assign io_out_bits_result_result_hi = p[63:32]; // @[MUL.scala 165:36]
  assign io_out_bits_result_result_lo = p[31:0]; // @[MUL.scala 166:36]
  assign partial_io_y_3 = multiplier[2:0]; // @[MUL.scala 160:31]
  assign partial_io_x = multiplicand; // @[MUL.scala 161:16]
  always @(posedge clock) begin
    if (reset) begin // @[MUL.scala 130:27]
      multiplier <= 34'h0; // @[MUL.scala 130:27]
    end else if (_count_T_1) begin // @[MUL.scala 147:51]
      if (count == 6'h0) begin // @[MUL.scala 148:25]
        multiplier <= _multiplier_T; // @[MUL.scala 149:18]
      end else begin
        multiplier <= {{2'd0}, multiplier[33:2]}; // @[MUL.scala 156:18]
      end
    end
    if (reset) begin // @[MUL.scala 131:29]
      multiplicand <= 68'h0; // @[MUL.scala 131:29]
    end else if (_count_T_1) begin // @[MUL.scala 147:51]
      if (count == 6'h0) begin // @[MUL.scala 148:25]
        multiplicand <= _multiplicand_T_1; // @[MUL.scala 150:20]
      end
    end
    if (reset) begin // @[MUL.scala 132:18]
      p <= 68'h0; // @[MUL.scala 132:18]
    end else if (_count_T_1) begin // @[MUL.scala 147:51]
      if (count == 6'h0) begin // @[MUL.scala 148:25]
        p <= 68'h0; // @[MUL.scala 151:9]
      end else begin
        p <= _p_T_3; // @[MUL.scala 155:9]
      end
    end
    if (reset) begin // @[MUL.scala 133:22]
      count <= 6'h0; // @[MUL.scala 133:22]
    end else if (~io_in_bits_ctrl_flow_flush & io_in_valid & ~io_out_valid) begin // @[MUL.scala 146:15]
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



// ###############################################################################################################3

/*then is scala code*/

// import chisel3._
// import chisel3.util._

// object Siganle{
//   val ss = "b00".U
//   val su = "b01".U
//   val uu = "b11".U
// }

// class Partial_product (booth_bit : Int = 3, mul_len: Int)extends Module{
//   val io = IO(new Bundle() {
//     val y_3 = Input(UInt(booth_bit.W))
//     val x = Input(UInt(((mul_len+2)*2).W))
//     val p = Output(UInt(((mul_len+2)*2).W))
//     val c = Output(UInt(1.W))
//   })


//   io.p := MuxCase(0.U(((mul_len+2)*2).W),Seq(
//     (io.y_3 === "b000".U) -> 0.U(((mul_len+2)*2).W),
//     (io.y_3 === "b001".U) -> io.x,
//     (io.y_3 === "b010".U) -> io.x,
//     (io.y_3 === "b011".U) -> (io.x << 1),
//     (io.y_3 === "b100".U) -> (~(io.x << 1)),
//     (io.y_3 === "b101".U) -> ((~io.x)),
//     (io.y_3 === "b110".U) -> (~io.x),
//     (io.y_3 === "b111".U) -> 0.U(((mul_len+2)*2).W),

//   ))
//   io.c := MuxCase(0.U(1.W), Seq(
//     (io.y_3 === "b000".U) -> 0.U(1.W),
//     (io.y_3 === "b001".U) -> 0.U(1.W),
//     (io.y_3 === "b010".U) -> 0.U(1.W),
//     (io.y_3 === "b011".U) -> 0.U(1.W),
//     (io.y_3 === "b100".U) -> 1.U(1.W),
//     (io.y_3 === "b101".U) -> 1.U(1.W),
//     (io.y_3 === "b110".U) -> 1.U(1.W),
//     (io.y_3 === "b111".U) -> 0.U(1.W),

//   ))
// }
// object Partial_product{
//     def apply(booth_bit : Int = 3, mul_len: Int,y_3:UInt,x:UInt) ={
//       val m = Module(new Partial_product(booth_bit,mul_len))
//       m.io.y_3 := y_3
//       m.io.x := x
//       (m.io.p,m.io.c)
//     }
// }

// class Booth_MUL(booth_bit : Int = 3, mul_len: Int) extends Module{
//   val io = IO(new Bundle() {
//     val in = Flipped(Decoupled(new MUL_IN(mul_len)))
//     val out = Decoupled(new MUL_OUT(mul_len))
//   })

//   val multiplier = RegInit(0.U(((mul_len+2)).W))
//   val multiplicand = RegInit(0.U(((mul_len+2)*2).W))
//   val p = RegInit(0.U(((mul_len+2)*2).W))
//   val count = RegInit(0.U(log2Ceil(mul_len+4).W))
//   val partial = Module(new Partial_product(booth_bit = 3,mul_len=mul_len))
//   val partial_c = partial.io.c
//   val partial_p = partial.io.p

//   val list_table = List(
//     (Siganle.ss) -> (SIgEXtend(io.in.bits.ctrl_data.src1,mul_len+1),SIgEXtend(io.in.bits.ctrl_data.src2,mul_len+1)),
//     (Siganle.su) -> (SIgEXtend(io.in.bits.ctrl_data.src1,mul_len+1),ZeroEXtend(io.in.bits.ctrl_data.src2,mul_len+1)),
//     (Siganle.uu) -> (ZeroEXtend(io.in.bits.ctrl_data.src1,mul_len+1),ZeroEXtend(io.in.bits.ctrl_data.src2,mul_len+1)),
//   )
//   val src1 = LookupTree(io.in.bits.ctrl_flow.mul_sign,list_table.map(p => (p._1,p._2._1)))
//   val src2 = LookupTree(io.in.bits.ctrl_flow.mul_sign,list_table.map(p => (p._1,p._2._2)))

  
  // count := Mux(!io.in.bits.ctrl_flow.flush && io.in.valid && !io.out.valid,count+2.U,0.U)
  // when(!io.in.bits.ctrl_flow.flush && io.in.valid){
  //   when (count === 0.U){
  //     multiplier := Cat(src2, Fill(1, 0.U))//xlen+2
  //     multiplicand := Cat(Fill(1,0.U),src1, Fill(mul_len + 2, 0.U))
  //     p := 0.U
  //   }
  //   .otherwise {
  //     val temp =p+partial_p+partial_c
  //     p := SIgEXtend(temp((mul_len+2)*2-1,2),(mul_len+2)*2)
  //     multiplier := multiplier >> 2
  //   }
  // }

  // partial.io.y_3 := multiplier(2,0)
  // partial.io.x := multiplicand

  // io.out.valid := Mux((count === ((mul_len+2) + 2).U && io.in.bits.ctrl_flow.mulw) || count === ((mul_len+2) + 2).U, true.B, false.B)
  // io.in.ready := true.B
  // io.out.bits.result.result_hi := p(mul_len * 2 -1, mul_len)
  // io.out.bits.result.result_lo := p(mul_len -1 , 0)

// }
