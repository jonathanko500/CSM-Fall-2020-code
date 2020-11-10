//implementation
#include <iostream>
#include "Fraction.h"
#include <cassert>
using namespace std;

namespace cs_fraction
{//start namespace

	//declare private functions
	void Fraction::simplify()
	{//start
		int total = top * bottom;//total num to test against to find gcd
		//gcd = greatest common divder
		for (int i = total; i > 1; i--)
		{	//start loop
			if ((top % i == 0) && (bottom % i == 0))
			{//test to see when numerator + denominator divided by i both = 0
				//if i divides both numerator + denominator = 0, then i is the gcd
				//if numberator + denominator is divided by gcd, then numberator + denominator will be simplified
				top /= i;
				bottom /= i;
			}
		}//end loop
	}//end





	//declare overloaded operator + function + constructor(s)
	//default constructor 
	Fraction::Fraction()
	{//start
		top = 0;
		bottom = 1;
	}//end






	//constructor w/ parameters
	Fraction::Fraction(int x, int y)
	{//start
		assert(bottom != 0);
		top = x;
		bottom = y;
		simplify();
	}//end





	
	ostream& operator<<(ostream& sign, const Fraction& x)
	{//start
		if (x.top < x.bottom)
		{
			sign << x.top << "/" << x.bottom;
		}
		else
		{
			int y = x.top/x.bottom;
			sign << y << "+" << x.top-x.bottom << "/" << x.bottom;
		}
		
		return sign;
	}//end






	//overloaded + for Fraction class
	Fraction Fraction :: operator+ (const Fraction x) const
	{//start
		Fraction temp(0, 0);
		temp.top = (top * x.bottom) + (x.top * bottom);//numerator
		temp.bottom = bottom * x.bottom;//denominator
		temp.simplify();
		return temp;
	}//end






	//overloaded - for Fraction class
	Fraction Fraction :: operator- (const Fraction x) const
	{//start
		Fraction temp(0, 0);
		temp.top = (top * x.bottom) - (x.top * bottom);//numerator
		temp.bottom = bottom * x.bottom;//denominator
		temp.simplify();
		return temp;
	}//end





	//overloaded * for Fraction class
	Fraction Fraction :: operator* (const Fraction x) const
	{//start
		Fraction temp(0, 0);
		temp.top = top * x.top;//numerator
		temp.bottom = bottom * x.bottom;//denominator
		temp.simplify();
		return temp;
	}//end





	 //overloaded / for Fraction class
	Fraction Fraction :: operator/ (const Fraction x) const
	{//start
		Fraction temp(0, 0);
		temp.top = top * x.bottom;//numerator
		temp.bottom = bottom * x.top;//denominator
		temp.simplify();
		return temp;
	}//end






	//overloaded < for Fraction class
	bool Fraction :: operator< (const Fraction x) const
	{//start
		//convert frac to decimal
		double og = top / bottom;//decimal of left side
		double test = x.top / x.bottom;//decimal of right side
		//test to see which decimal is smaller
		if (og < test)
		{
			return true;
		}
	}//end






	//overloaded <= for Fraction class
	bool Fraction :: operator<= (const Fraction x) const
	{//start
		//convert frac to decimal
		double og = top / bottom;//decimal of left side
		double test = x.top / x.bottom;//decimal of right side
		//test to see which decimal is smaller
		if (og <= test)
		{
			return true;
		}
	}//end






	//overloaded > for Fraction class
	bool Fraction :: operator> (const Fraction x) const
	{//start
		//convert frac to decimal
		double og = top / bottom;//decimal of left side
		double test = x.top / x.bottom;//decimal of right side
		//test to see which decimal is smaller
		if (og > test)
		{
			return true;
		}
	}//end






	//overloaded >= for Fraction class
	bool Fraction :: operator>= (const Fraction x) const
	{//start
		//convert frac to decimal
		double og = top / bottom;//decimal of left side
		double test = x.top / x.bottom;//decimal of right side
		//test to see which decimal is smaller
		if (og >= test)
		{
			return true;
		}
	}//end






	//overloaded == for Fraction class
	bool Fraction :: operator== (const Fraction x) const
	{//start
		//convert frac to decimal
		double og = top / bottom;//decimal of left side
		double test = x.top / x.bottom;//decimal of right side
		//test to see which decimal is smaller
		if (og == test)
		{
			return true;
		}
	}//end






	//overloaded != for Fraction class
	bool Fraction :: operator!= (const Fraction x) const
	{//start
		//convert frac to decimal
		double og = top / bottom;//decimal of left side
		double test = x.top / x.bottom;//decimal of right side
		//test to see which decimal is smaller
		if (og != test)
		{
			return true;
		}
	}//end






	//overloaded ++ for Fraction class pre-fix
	Fraction Fraction :: operator++()
	{//start
		top += bottom;
		return *this;
	}//end




	//overloaded ++ for Fraction class post-fix
	Fraction Fraction :: operator++ (int)
	{//start
		Fraction temp(top, bottom);
		top+=bottom;
		return temp;
	}//end






	//overloaded -- for Fraction class pre-fix
	Fraction Fraction :: operator--()
	{//start
		top -= bottom;
		return *this;
	}//end




	//overloaded -- for Fraction class post-fix
	Fraction Fraction :: operator-- (int)
	{//start
		Fraction temp(top, bottom);
		top-=bottom;
		return temp;
	}//end
}//end namespace
