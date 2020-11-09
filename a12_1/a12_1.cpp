//client
/*
Jonathan Ko
10/26/2020
CIS 278
Assignment #10

This program is called Fraction
With the help of sepperate file classes, the compiler will be able to do basic arithmetic
computations with objects being reated as fractions.

These fractions are able to be
added
subtracted
multiplied
divided
simplified

In addition to having the fractions be made, the fractions are able to be worked on by operator instead of using functions
*/
#include <iostream>
#include "Fraction.h"
#include <cassert>
using namespace cs_fraction;

int main()
{//start main
	Fraction x(5, 10);
	x.print();
	cout << endl;
	Fraction y(6, 10);
	y.print();
	cout << endl;
	Fraction test(0, 0);


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
	/*
	x = 1/2
	y = 1/3
	*/
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
	//************


	//increment/decrement tester
	cout << "increment/decrement tester" << endl;
	y.print();
	cout << " + 1 = ";
	y++;
	y.print();
	cout << endl;
	x.print();
	cout << " - 1 = ";
	x--;
	x.print(); cout << endl;
}//end main