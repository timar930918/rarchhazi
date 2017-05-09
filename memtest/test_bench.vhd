--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:48:30 05/09/2017
-- Design Name:   
-- Module Name:   C:/Users/Ari/Desktop/xilinx/fehervari/memtest/test_bench.vhd
-- Project Name:  memtest
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: M23A1024
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_bench IS
END test_bench;
 
ARCHITECTURE behavior OF test_bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT M23A1024
    PORT(
         SI_SIO0 : INOUT  std_logic;
         SO_SIO1 : INOUT  std_logic;
         SCK : IN  std_logic;
         CS_N : IN  std_logic;
         SIO2 : INOUT  std_logic;
         HOLD_N_SIO3 : INOUT  std_logic;
         RESET : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal SCK : std_logic := '0';
   signal CS_N : std_logic := '0';
   signal RESET : std_logic := '0';

	--BiDirs
   signal SI_SIO0 : std_logic;
   signal SO_SIO1 : std_logic;
   signal SIO2 : std_logic;
   signal HOLD_N_SIO3 : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: M23A1024 PORT MAP (
          SI_SIO0 => SI_SIO0,
          SO_SIO1 => SO_SIO1,
          SCK => SCK,
          CS_N => CS_N,
          SIO2 => SIO2,
          HOLD_N_SIO3 => HOLD_N_SIO3,
          RESET => RESET
        );

   -- Clock process definitions
   <clock>_process :process
   begin
		<clock> <= '0';
		wait for <clock>_period/2;
		<clock> <= '1';
		wait for <clock>_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for <clock>_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
