module MEM (
    input wire clk,//clock
    input wire reset,//global reset

    //shark hand
    input wire left_valid,//IF stage's data is ready
    output wire left_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready//EXE stage is allowin
);

wire right_fire;
reg valid;
assign right_fire=right_ready & right_valid;//data submit finish







//shark hands
always @(posedge clk) begin
    if(reset == `RestEn) begin
        valid <= `false; 
    end
    else begin 
        if(left_valid & right_ready) begin
            valid <= `true;
        end
        else if(~right_fire)begin 
            valid <= `false;
        end
        else begin 
            valid <= `false;
        end
    end
end

//data block
always @(posedge clk) begin
    if(reset == `RestEn) begin 
        bus_temp <= `ctrl_width'h0;
    end
    else begin 
        if(left_valid & right_ready) begin 
            bus_temp <= {
                    PC,//134:165
                    Inst,//102:133
                    wreg_index,//97:101
                    wreg_en,//96:96
                    src2,// 64:95
                    src1,// 32:63
                    Imm// 0:31
                    };
        end
    end
end
// output logic
assign right_valid=valid;
assign lift_ready=right_ready;


endmodule //MEM