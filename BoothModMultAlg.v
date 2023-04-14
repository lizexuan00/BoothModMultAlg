`timescale 1ns / 1ps

module BoothModMultAlg #(parameter n = 16) //n must be even
	(input signed [n-1:0] MR, MP,
	output reg signed [2*n - 1:0] Product);
	
reg signed [2*n - 1:0] PP;

reg signed [n:0] MRi;

integer BG; //3-bit group index

always @(*) begin : BMM_Algorithm
	PP = 0;
	MRi = {MR, 1'b0};
	for (BG = 0; BG < n/2; BG = BG + 1) begin //0, 1, 2, 3
		case (MRi[2:0])
			0, 7 : PP = PP + 0;
			1, 2 : PP = PP + (MP <<< 2*BG); //sign extend MP to 2n bits
			3 : PP = PP + (2*MP <<< 2*BG);
			4 : PP = PP - (2*MP <<< 2*BG);
			5, 6 : PP = PP - (MP <<< 2*BG);
		endcase
		MRi = MRi >> 2;
	end
	Product = PP;
end

endmodule
