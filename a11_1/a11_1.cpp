#include <iostream>
#include <string>
#include <cassert>
using namespace std;

class Fraction
{//start class
	//initialize private variable
private:
	int top;//numerator
	int bottom;//denominator
//initialize functions
public:
	//constructors
	Fraction();
	Fraction(int x = 0, int y = 1);
	//functions + operators
	void print();
	Fraction operator+ (const Fraction x) const;
	Fraction operator- (const Fraction x) const;
	Fraction operator* (const Fraction x) const;
	Fraction operator/ (const Fraction x) const;
};//end class






//declare function + constructor
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
}//end






void Fraction::print()
{//start
	cout << top << "/" << bottom;
}//end






//overloaded + for Fraction class
Fraction Fraction :: operator+ (const Fraction x) const
{//start
	Fraction temp(0,0);
	temp.top = (top * x.bottom) + (x.top * bottom);//numerator
	temp.bottom = bottom * x.bottom;//denominator
	return temp;
}//end






//overloaded - for Fraction class
Fraction Fraction :: operator- (const Fraction x) const
{//start
	Fraction temp(0, 0);
	temp.top = (top * x.bottom) - (x.top * bottom);//numerator
	temp.bottom = bottom * x.bottom;//denominator
	return temp;
}//end
 
 
 
 
 
 //overloaded * for Fraction class
Fraction Fraction :: operator* (const Fraction x) const
{//start
	Fraction temp(0, 0);
	temp.top = top * x.top;//numerator
	temp.bottom = bottom * x.bottom;//denominator
	return temp;
}//end
 
 
 
 
 
 //overloaded / for Fraction class
Fraction Fraction :: operator/ (const Fraction x) const
{//start
	Fraction temp(0, 0);
	temp.top = top * x.bottom;//numerator
	temp.bottom = bottom * x.top;//denominator
	return temp;
}//end





int main()
{//start main
	Fraction x(1,8);
	x.print();
	cout << endl;
	Fraction y(8);
	y.print();
	cout << endl;
	Fraction test(0,0);
	//"+" test
	test = x + y;
	test.print();
	cout << endl;
	//"-" test
	test = x - y;
	test.print();
	cout << endl;
	//"*" test
	test = x * y;
	test.print();
	cout << endl;
	//"/" test
	test = x / y;
	test.print();
	cout << endl;
}//end main