library ieee;
use ieee.std_logic_1164.all;

entity pLayer is -- have the register incorpoated in the layer 
generic (K: integer:=24; 
			A: integer:=4;
			oS : integer := 16); -- with this reg file we can have 5 perceptrons per layer, 5 output
port
(
	perl_clk        		:in    	std_logic;

	reg_wr				:in		std_logic;
	reg_addr				:in  		std_logic_vector(A-1 downto 0); -- connections will handle this 
	reg_input			:in    	std_logic_vector(K-1 downto 0); -- break up the 8 bit values
	
	
	outP1            	:out   	std_logic_vector(oS-1 downto 0); 
	outP2            	:out   	std_logic_vector(oS-1 downto 0); 
	outP3            	:out   	std_logic_vector(oS-1 downto 0); 
	outP4            	:out   	std_logic_vector(oS-1 downto 0); 
	outP5            	:out   	std_logic_vector(oS-1 downto 0)
	
	-- if we increase the amount of perceptrons then we need to either build an intermediate step or build an output reg or bring it back to the output 
	
	
	-- this should be 

);

end entity;



---------------------------------------------------------
--  Structural coding
---------------------------------------------------------


architecture rtl of pLayer is -- control the starting address using loop 
 -- larger signals will be buses 
signal reg_staddr	: std_logic_vector(A-1 downto 0);
signal reg_out1,reg_out2,reg_out3,reg_out4,
		 reg_out5,reg_out6,reg_out7,reg_out8,
		 reg_out9,reg_out10,reg_out11,reg_out12,
		 reg_out13,reg_out14,reg_out15,reg_out16  : std_logic_vector(K-1 downto 0);


component reg_file -- 1 = input, 2 = weight, 3 = activationvalue
	port ( 
   		 reg_clk         : in  std_logic;
			 input       : in  std_logic_vector(K-1 downto 0);
			 writeEnable : in  std_logic;
			 addr			 : in  std_logic_vector(A-1 downto 0);
			 startAddr	 : in std_logic_vector(A-1 downto 0); -- needs to be factor of 16
			 
			 outP1,outP2,outP3,outP4,
			 outP5,outP6,outP7,outP8,
			 outP9,outP10,outP11,outP12,
			 outP13,outP14,outP15,outP16 : out std_logic_vector(K-1 downto 0) -- outP16 will not be used maybe have an output like an array
			 
			 );
		end component;
		
component perceptron 
	port
		(
			per_clk        				:in    	std_logic;
			
			input_1					:in    	std_logic_vector(7 downto 0);
			weight_1					:in		std_logic_vector(7 downto 0);
			
			input_2					:in    	std_logic_vector(7 downto 0);
			weight_2					:in		std_logic_vector(7 downto 0);
			
			input_3					:in    	std_logic_vector(7 downto 0);
			weight_3					:in		std_logic_vector(7 downto 0);

			activationValue  		:in    	std_logic_vector(15 downto 0);

			
			action_potential     :out   	std_logic_vector(oS-1 downto 0)


		);

	end component;


begin

	layer_reg: reg_file port map(perl_clk, reg_input,reg_wr, reg_addr, reg_staddr,
		 reg_out1,reg_out2,reg_out3,reg_out4,
		 reg_out5,reg_out6,reg_out7,reg_out8,
		 reg_out9,reg_out10,reg_out11,reg_out12,
		 reg_out13,reg_out14,reg_out15,reg_out16 ); -- if we could make this an array would be easier to scale in the future 
		 
   reg_staddr <= "0000"; -- used for bigger regs 
--	reg_wr <= ;
	
	p1 : perceptron 
	port map
	(perl_clk, reg_out1(7 downto 0), reg_out2(7 downto 0), reg_out1(15 downto 8), 
	reg_out2(15 downto 8),  reg_out1(23 downto 16), reg_out2(23 downto 16), 
	reg_out3(15 downto 0), outP1);
	
	p2 : perceptron 
	port map
	(perl_clk, reg_out4(7 downto 0), reg_out5(7 downto 0), reg_out4(15 downto 8), 
	reg_out5(15 downto 8),  reg_out4(23 downto 16), reg_out5(23 downto 16), 
	reg_out6(15 downto 0), outP2);
	
	p3 : perceptron 
	port map
	(perl_clk, reg_out7(7 downto 0), reg_out8(7 downto 0), reg_out7(15 downto 8), 
	reg_out8(15 downto 8),  reg_out7(23 downto 16), reg_out8(23 downto 16), 
	reg_out9(15 downto 0), outP3);
	
	p4 : perceptron 
	port map
	(perl_clk, reg_out10(7 downto 0), reg_out11(7 downto 0), reg_out10(15 downto 8), 
	reg_out11(15 downto 8),  reg_out10(23 downto 16), reg_out11(23 downto 16), 
	reg_out12(15 downto 0), outP4);
	
	p5 : perceptron 
	port map
	(perl_clk, reg_out13(7 downto 0), reg_out14(7 downto 0), reg_out13(15 downto 8), 
	reg_out14(15 downto 8),  reg_out13(23 downto 16), reg_out14(23 downto 16), 
	reg_out15(15 downto 0), outP5);


end rtl;