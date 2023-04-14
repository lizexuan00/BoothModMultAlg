`timescale 1ns / 1ps

module test_BoothModMultAlg;
	localparam N = 16;
	reg signed [N-1:0] MR;
	reg signed [N-1:0] MP;
	wire signed [2*N-1:0] Product, ProductC;
	assign ProductC = MR * MP;
	wire check = Product == ProductC;
	BoothModMultAlg #(.n(N)) uut (
	.MR(MR),
	.MP(MP),
	.Product(Product)
	);
	initial begin
		MR = 0;
		MP = 0;
		repeat (100) begin
			{MR, MP} = $random;
			#100;
			end
		$stop;
		end
endmodule
