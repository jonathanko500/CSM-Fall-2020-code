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
	//<<
	friend ostream& operator<<(ostream& sign, const Fraction& x);
	void print();
	//operators
	Fraction operator+ (const Fraction x) const;
	Fraction operator- (const Fraction x) const;
	Fraction operator* (const Fraction x) const;
	Fraction operator/ (const Fraction x) const;
	//inequality
	bool operator< (const Fraction x) const;
	bool operator<= (const Fraction x) const;
	bool operator> (const Fraction x) const;
	bool operator>= (const Fraction x) const;
	bool operator== (const Fraction x) const;
	bool operator!= (const Fraction x) const;
	//increment + decrement
	Fraction operator++();
	Fraction operator++(int);
	Fraction operator--();
	Fraction operator--(int);
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






ostream& operator<<(ostream& sign, const Fraction& x)
{//start
	if (x.top > x.bottom)
	{
		int y = x.top / x.bottom;
		sign << y << "+" << x.top - x.bottom << "/" << x.bottom;
	}
	else
	{
		sign << x.top << "/" << x.bottom;
	}
	return sign;
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
	top++;
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
	top--;
	return temp;
}//end







int main()
{//start main
	Fraction x(1,2);
	cout << x << endl;
	//cout << x << endl;
	Fraction y(1,3);
	cout << x << endl;
	//cout << y << endl;
	Fraction test(0,0);
	//*****
	cout << "Math testers" << endl;
	//"+" test
	test = x + y;
	cout << test << endl;
	//"-" test
	test = x - y;
	cout << test << endl;
	//"*" test
	test = x * y;
	cout << test << endl;
	//"/" test
	test = x / y;
	cout << test << endl;
	//*******
	//"+=" test
	cout << "Inequality testers" << endl;
	/*
	x = 1/2
	y = 1/3
	*/
	//"<" tester
	cout << x << " < " << y;
	if (x < y)
	{
		cout << " is true"<< endl;
	}
	else
	{
		cout << " is false" << endl;
	}
	//"<=" tester
	cout << x << " <= " << y;
	if (x <= y)
	{
		cout << " is true" << endl;
	}
	else
	{
		cout << " is false" << endl;
	}
	//">" tester
	cout << x << " > " << y;
	if (x > y)
	{
		cout << " is true" << endl;
	}
	else
	{
		cout << " is false" << endl;
	}
	//">=" tester
	cout << x << " >= " << y;
	if (x >= y)
	{
		cout << " is true" << endl;
	}
	else
	{
		cout << " is false" << endl;
	}
	//"==" tester
	cout << x << " == " << y;
	if (x == y)
	{
		cout << " is true" << endl;
	}
	else
	{
		cout << " is false" << endl;
	}//"!=" tester
	cout << x << " != " << y;
	if (x != y)
	{
		cout << " is true" << endl;
	}
	else
	{
		cout << " is false" << endl;
	}
	//increment/decrement tester
	y++;
	cout << y << endl;
	x--;
	cout << x << endl;
}//end main

/*
original main

int main()
{//start main
	Fraction x(1,2);
	x.print();
	cout << endl;
	//cout << x << endl;
	Fraction y(1,3);
	y.print();
	cout << endl;
	//cout << y << endl;
	Fraction test(0,0);
	//*****
	cout << "Math testers" << endl;
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
	//*******
	//"+=" test
	cout << "Inequality testers" << endl;
	//"<" tester
	x.print();
	cout << " < ";
	y.print();
	if (x < y)
	{
		cout << " is true" << endl;
	}
	else
	{
		cout << " is false" << endl;
	}
	//"<=" tester
	x.print();
	cout << " <= ";
	y.print();
	if (x <= y)
	{
		cout << " is true" << endl;
	}
	else
	{
		cout << " is false" << endl;
	}
	//">" tester
	x.print();
	cout << " > ";
	y.print();
	if (x > y)
	{
		cout << " is true" << endl;
	}
	else
	{
		cout << " is false" << endl;
	}
	//"<=" tester
	x.print();
	cout << " <= ";
	y.print();
	if (x >= y)
	{
		cout << " is true" << endl;
	}
	else
	{
		cout << " is false" << endl;
	}
	//"==" tester
	x.print();
	cout << " == ";
	y.print();
	if (x == y)
	{
		cout << " is true" << endl;
	}
	else
	{
		cout << " is false" << endl;
	}//"!=" tester
	x.print();
	cout << " != ";
	y.print();
	if (x != y)
	{
		cout << " is true" << endl;
	}
	else
	{
		cout << " is false" << endl;
	}
	//increment/decrement tester
	y++;
	y.print();
	cout << endl;
	x--;
	x.print(); cout << endl;
}//end main
*/