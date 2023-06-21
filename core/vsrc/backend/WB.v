module WB (
    input wire clk,//clock
    input wire reset,//global reset
    //bus 
    input wire [`mem_ctrl_width-1:0] mem_ctrl_bus,
    output wire [`mem_ctrl_width-1:0] wb_ctrl_bus,

    //csr
    input wire [`ex_csr_ctrl_width-1:0] mem_csr_bus,
    output wire [`ex_csr_ctrl_width-1:0] wb_csr_bus,

    //bypass
    output wire [`bypass_width-1:0]wb_bypass,
    //shark hand
    input wire left_valid,//IF stage's data is ready
    output wire left_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready,//EXE stage is allowin
    output wire is_fire,
    input wire fire
);

// wire right_fire;
assign is_fire = logic_valid & right_ready;
reg valid;
reg [`mem_ctrl_width-1:0]bus_temp;
reg [`ex_csr_ctrl_width-1:0] csr_bus_temp;
wire logic_valid;
// wire inst_valid;

// assign inst_valid = left_valid? mem_ctrl_bus[102:102]:1'b0;



// assign right_fire=right_ready & right_valid;//data submit finish
//shark hands
always @(posedge clk) begin
    if(reset == `RestEn) begin
        valid <= `false; 
    end
    else begin 
        if(fire)begin 
            valid <= `false;
        end
        if(logic_valid & right_ready) begin
            valid <= `true;
        end
        // if(flush) begin
        //     valid <= `false;
        // end
    end
end

//data block
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        bus_temp <= `mem_ctrl_width'h0;
        csr_bus_temp <= `ex_csr_ctrl_width'h0;
    end
    else begin 
        if(logic_valid & right_ready) begin 
            bus_temp <= mem_ctrl_bus;//{mem_ctrl_bus[103:103],inst_valid,mem_ctrl_bus[101:0]};
            csr_bus_temp <= mem_csr_bus;
        end
    end
end
// output logic
assign right_valid=valid;
assign logic_valid = left_valid;
assign left_ready=right_ready;
assign wb_ctrl_bus=bus_temp;
assign wb_csr_bus = csr_bus_temp;
assign wb_bypass = {mem_ctrl_bus[31:0],mem_ctrl_bus[101:97],mem_ctrl_bus[96:96] & left_valid};

endmodule //WB