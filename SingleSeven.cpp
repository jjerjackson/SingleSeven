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
 #include "Arduino.h";
 #include "SingleSeven.h";
 
 int a;
 int b;
 int c;
 int d;
 int e;
 int f;
 int g;
 int dp;
 
 SingleSeven::SingleSeven(int a, int b, int c, int d, int e, int f, int g, int dp)
 {
	pinMode(a, OUTPUT);
	_a = a;
	pinMode(b, OUTPUT);
	_b = b;
	pinMode(c, OUTPUT);
	_c = c;
	pinMode(d, OUTPUT);
	_d = d;
	pinMode(e, OUTPUT);
	_e = e;
	pinMode(f, OUTPUT);
	_f = f;
	pinMode(g, OUTPUT);
	_g = g;
	pinMode(dp, OUTPUT);
	_dp = dp;
	}
	
void SingleSeven::num0()
{
	digitalWrite(_a, HIGH);
	digitalWrite(_b, HIGH);
	digitalWrite(_c, HIGH);
	digitalWrite(_d, HIGH);
	digitalWrite(_e, HIGH);
	digitalWrite(_f, HIGH);
	digitalWrite(_g, LOW);
	digitalWrite(_dp, LOW);
}	

void SingleSeven::num1()
{
	digitalWrite(_a, LOW);
	digitalWrite(_b, HIGH);
	digitalWrite(_c, HIGH);
	digitalWrite(_d, LOW);
	digitalWrite(_e, LOW);
	digitalWrite(_f, LOW);
	digitalWrite(_g, LOW);
	digitalWrite(_dp, LOW);
}

void SingleSeven::num2()
{
	digitalWrite(_a, HIGH);
	digitalWrite(_b, HIGH);
	digitalWrite(_c, LOW);
	digitalWrite(_d, HIGH);
	digitalWrite(_e, HIGH);
	digitalWrite(_f, LOW);
	digitalWrite(_g, HIGH);
	digitalWrite(_dp, LOW);	
}

void SingleSeven::num3()
{
	digitalWrite(_a, HIGH);
	digitalWrite(_b, HIGH);
	digitalWrite(_c, HIGH);
	digitalWrite(_d, HIGH);
	digitalWrite(_e, LOW);
	digitalWrite(_f, LOW);
	digitalWrite(_g, HIGH);
	digitalWrite(_dp, LOW);
}

void SingleSeven::num4()
{
	digitalWrite(_a, LOW);
	digitalWrite(_b, HIGH);
	digitalWrite(_c, HIGH);
	digitalWrite(_d, LOW);
	digitalWrite(_e, LOW);
	digitalWrite(_f, HIGH);
	digitalWrite(_g, HIGH);
	digitalWrite(_dp, LOW);
}

void SingleSeven::num5()
{
	digitalWrite(_a, HIGH);
	digitalWrite(_b, LOW);
	digitalWrite(_c, HIGH);
	digitalWrite(_d, HIGH);
	digitalWrite(_e, LOW);
	digitalWrite(_f, HIGH);
	digitalWrite(_g, HIGH);
	digitalWrite(_dp, LOW);
}

void SingleSeven::num6()
{
	digitalWrite(_a, HIGH);
	digitalWrite(_b, LOW);
	digitalWrite(_c, HIGH);
	digitalWrite(_d, HIGH);
	digitalWrite(_e, HIGH);
	digitalWrite(_f, HIGH);
	digitalWrite(_g, HIGH);
	digitalWrite(_dp, LOW);
}

void SingleSeven::num7()
{
	digitalWrite(_a, HIGH);
	digitalWrite(_b, HIGH);
	digitalWrite(_c, HIGH);
	digitalWrite(_d, LOW);
	digitalWrite(_e, LOW);
	digitalWrite(_f, LOW);
	digitalWrite(_g, LOW);
	digitalWrite(_dp, LOW);
}

void SingleSeven::num8()
{
	digitalWrite(_a, HIGH);
	digitalWrite(_b, HIGH);
	digitalWrite(_c, HIGH);
	digitalWrite(_d, HIGH);
	digitalWrite(_e, HIGH);
	digitalWrite(_f, HIGH);
	digitalWrite(_g, HIGH);
	digitalWrite(_dp, LOW);
}

void SingleSeven::num9()
{
	digitalWrite(_a, HIGH);
	digitalWrite(_b, HIGH);
	digitalWrite(_c, HIGH);
	digitalWrite(_d, LOW);
	digitalWrite(_e, LOW);
	digitalWrite(_f, HIGH);
	digitalWrite(_g, HIGH);
	digitalWrite(_dp, LOW);
}

void SingleSeven::blank()
{
	digitalWrite(_a, LOW);
	digitalWrite(_b, LOW);
	digitalWrite(_c, LOW);
	digitalWrite(_d, LOW);
	digitalWrite(_e, LOW);
	digitalWrite(_f, LOW);
	digitalWrite(_g, LOW);
	digitalWrite(_dp, HIGH);
}

void SingleSeven::writeSeg(int num)
{switch (num)  { 
  case 0:
    {num0();}
    break;
  case 1:
    {num1();}
    break;
  case 2:
    {num2();}
    break;
  case 3:
    {num3();}
    break;
  case 4:
    {num4();}
    break;
  case 5:
    {num5();}
    break;
  case 6:
    {num6();}
    break;
  case 7:
    {num7();}
    break;
  case 8:
    {num8();}
    break;
  case 9:
    {num9();}
    break;
  default:
    {blank();}
    break;}
}