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
compared 
simplified

*/
/*
client program
*/
#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{//start main

	//declare frac variables

	//fraction a
	Fraction f1(9, 8);
	//fraction b
	Fraction f2(2, 3);
	//fraction showing math between a and b
	Fraction result;

	//print tester

	//inital print test for result
	cout << "The result starts off at ";
	result.print();
	cout << endl;
	//print f1
	cout << "fraction f1 is ";
	f1.print();
	cout << endl;
	//print f2
	cout << "fraction f2 is ";
	f2.print();
	cout << endl;
	


	
	//class function tester
	

	//mulitplyBy test
	cout << "The product of ";
	f1.print();
	cout << " and ";
	f2.print();
	cout << " is ";
	result = f1.multipliedBy(f2);
	result.print();
	cout << endl;

	//divideBy test
	cout << "The quotient of ";
	f1.print();
	cout << " and ";
	f2.print();
	cout << " is ";
	result = f1.dividedBy(f2);
	result.print();
	cout << endl;

	//addedTo test
	cout << "The sum of ";
	f1.print();
	cout << " and ";
	f2.print();
	cout << " is ";
	result = f1.addedTo(f2);
	result.print();
	cout << endl;

	//subtract test
	cout << "The difference of ";
	f1.print();
	cout << " and ";
	f2.print();
	cout << " is ";
	result = f1.subtract(f2);
	result.print();
	cout << endl;

	//isEqualTo test
	if (f1.isEqualTo(f2))
	{
		cout << "The two fractions are equal." << endl;
	}
	else
	{
		cout << "The two fractions are not equal." << endl;
	}
	
	
	//more test frac for simplify
	const Fraction f3(12, 8);
	const Fraction f4(202, 303);
	result = f3.multipliedBy(f4);
	cout << "The product of ";
	f3.print();
	cout << " and ";
	f4.print();
	cout << " is ";
	result.print();
	cout << endl;
	
}//end main

/*output
* 
The result starts off at 0/1
fraction f1 is 9/8
fraction f2 is 2/3
The product of 9/8 and 2/3 is 3/4
The quotient of 9/8 and 2/3 is 27/16
The sum of 9/8 and 2/3 is 43/24
The difference of 9/8 and 2/3 is 11/24
The two fractions are equal.
The product of 3/2 and 2/3 is 1/1

*/