/*
 *Single digit seven segment common cathode display driver
 *written by James Jackson.  06/24/16
 * ----------------------------------------------------------------------------
 * "BEER-WARE LICENSE" (Revision 973):
 * <I> wrote this file.  As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return.   James M. Jackson
 * ----------------------------------------------------------------------------
 */
 #ifndef SingleSeven_H
 #define SingleSeven_H
 
 #include <Arduino.h>
 
 class SingleSeven
 {
	 public:
		
		//define pins for display
		
		SingleSeven(int a, int b, int c, int d, int e, int f, int g, int dp);
		
		//individual number outputs
		
		void num0();
		void num1();
		void num2();
		void num3();
		void num4();
		void num5();
		void num6();
		void num7();
		void num8();
		void num9();
		
		//decimal point only
		
		void blank();
		
		//write from variable num
		
		void writeSeg(int num);
				
	private:
	
	int _a;
	int _b;
	int _c;
	int _d;
	int _e;
	int _f;
	int _g;
	int _dp;
	
 };
 
 #endif