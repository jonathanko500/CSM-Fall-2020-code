/*
implementation file 
declare all functions in Fraction.h file
*/


#include <iostream>
#include "Fraction.h"
#include <cassert>
using namespace std;

//private functions
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



//public functions
/*
default Fraction constructor
makes the numerator set to 0
makes the denominator set to 1
*/
Fraction::Fraction()
{//start
	top = 0;
	bottom = 1;
}//end






/*
Fraction constructor with 2 int arguments to declare 
a numerator + denominator
*/
Fraction::Fraction(int x, int y)
{//start
	top = x;
	bottom = y;
	assert(bottom != 0);
	simplify();
}//end





/*
prints the 2 variables in fraction form with "/"
*/
void Fraction::print()
{//start
	cout << top << "/" << bottom;
}//end





/*
takes fraction argument and adds the two fractions
*/
Fraction Fraction::addedTo(Fraction x)
{//start
	int t = (top * x.bottom) + (x.top * bottom);//numerator
	int b = bottom * x.bottom;//denominator
	Fraction add(t, b);
	return add;
}//end






/*
takes fraction argument and subtract the two fractions
*/
Fraction Fraction::subtract(Fraction x)
{//start
	int t = (top * x.bottom) - (x.top * bottom);//numerator
	int b = bottom * x.bottom;//denominator
	Fraction sub(t, b);
	return sub;
}//end






/*
takes fraction argument and multiplies the two fractions
*/
Fraction Fraction::multipliedBy(Fraction x)
{//start
	int t = top * x.top;//numerator
	int b = bottom * x.bottom;//denominator
	Fraction multi(t, b);
	return multi;
}//end






/*
takes fraction argument and divides the two fractions
*/
Fraction Fraction::dividedBy(Fraction x)
{//start
	int t = top * x.bottom;//numerator
	int b = bottom * x.top;//denominator
	Fraction div(t, b);
	return div;
}//end






/*
takes fraction and compares to see if both fractions are equal
*/
bool Fraction::isEqualTo(Fraction x)
{//start
	if (top * x.bottom == bottom * x.top)
	{//compare if (frac a numerator * frac b denomiator) = (frac a denominator * frac b numerator)
		return true;
	}
}//end





