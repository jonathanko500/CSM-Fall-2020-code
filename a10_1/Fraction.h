/*
header file
all initalized variables and functions
*/


#ifndef FRACTION_H
#define FRACTION_H


//declare class
class Fraction
{//start class
	//initialize private variable
	private:
		int top;//numerator
		int bottom;//denominator
		void simplify();//simplify fraction
	//initialize functions
	public:
		Fraction();
		Fraction(int x, int y);
		Fraction addedTo(Fraction x);
		Fraction subtract(Fraction x);
		Fraction multipliedBy(Fraction x);
		Fraction dividedBy(Fraction x);
		bool isEqualTo(Fraction x);
		void print();
};//end class

#endif

