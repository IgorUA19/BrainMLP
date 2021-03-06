library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity divider_16bit is
generic(
  N             : integer := 16);
port (
--  i_clk       : in     std_logic;
  i_div1      : in     std_logic_vector(N-1 downto 0);
  i_div2      : in     std_logic_vector(N-1 downto 0);
  o_quot       : out    std_logic_vector(N-1 downto 0));
end divider_16bit;

architecture rtl of divider_16bit is

signal r_div1   : signed(N downto 0);
signal r_div2   : signed(N downto 0);
signal w_quot    : signed(N downto 0);

begin

-- multiplier 
  w_quot <= r_div1 / r_div2;

r_process : process(i_div1,i_div2)
begin
--  if(rising_edge(i_clk)) then
  
  -- register input and extend sign
    r_div1      <=  resize(signed(i_div1),N+1);
    r_div2      <=  resize(signed(i_div2),N+1);
    
  -- register output
    o_quot       <= std_logic_vector(w_quot);
    
--  end if;
end process r_process;

end rtl;