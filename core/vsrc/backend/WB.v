module WB (
    input wire clk,//clock
    input wire reset,//global reset

    input wire [`mem_ctrl_width-1:0] mem_ctrl_bus,
    output wire [`mem_ctrl_width-1:0] wb_ctrl_bus,

    //shark hand
    input wire left_valid,//IF stage's data is ready
    output wire left_ready,//ID stage is allowin
    output wire right_valid,//ID stage's data is ready
    input wire right_ready//EXE stage is allowin
);

wire right_fire;
reg valid;
reg [`mem_ctrl_width-1:0]bus_temp;






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
        bus_temp <= `mem_ctrl_width'h0;
    end
    else begin 
        if(left_valid & right_ready) begin 
            bus_temp <= mem_ctrl_bus;
        end
    end
end
// output logic
assign right_valid=valid;
assign lift_ready=right_ready;
assign wb_ctrl_bus=bus_temp;


endmodule //WB