//client
/*
Jonathan Ko
11/16/2020
CIS 278
Assignment #13

This program is called MyString

This program uses dynamic memory and creating objects of strings/chars

The program creates an object that lets the compiler determine the number of characters in that string

The users is also allowed to
assign other of similar object with the = operator
assign 1 new characters in the string obj
the object is compatible with <<
copy an object 

*/
#include <iostream>
#include "MyString.h"
using namespace std;
using namespace cs_mystring;



int main()
{//start main

	//construct MyString object
	MyString x;
	MyString y("hunter");

	
	//test function to return num of characters in word
	cout << x << " has " << x.Size() << " characters" << endl;
	cout << y << " has " << y.Size() << " characters" << endl;

	//test to construct object w/ const string
	const MyString w("wizards");
	MyString z(w);
	cout << z << " has " << z.Size() << " characters" << endl;

	//test [] operator
	y[0] = 'H';
	y[1] = 'U';
	cout << y << " has " << y.Size() << " characters" << endl;

	cout << w[0] << endl;

	//test = operator
	x = z;
	cout << x << " has " << x.Size() << " characters" << endl;

}//end main