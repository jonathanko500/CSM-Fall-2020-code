//client
/*
Jonathan Ko
11/23/2020
CIS 278
Assignment #14
This program is called MyString
This program uses dynamic memory and creating objects of strings/chars
The program creates an object that lets the compiler determine the number of characters in that string
The users is also allowed to
assign other of similar object with the = operator
assign 1 new characters in the string obj
the object is compatible with <<
copy an object
*/
#include <fstream>
#include <cctype>      // for toupper()
#include <string>     
#include <cassert>
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
	cout << x << " = x has " << x.Size() << " characters" << endl;
	cout << y << " = y has " << y.Size() << " characters" << endl;

	//test to construct object w/ const string
	const MyString w("wizards");
	cout << w.Size() << endl;
	MyString z(w);
	cout << z << " = z has " << z.Size() << " characters" << endl;

	//test [] operator
	y[0] = 'H';
	y[1] = 'U';
	cout << y << " = y has " << y.Size() << " characters" << endl;;

	//test = operator
	x = z;
	cout << x << " = x has " << x.Size() << " characters" << endl;



	//test read
	cout << endl << "----- now, line by line" << endl;
	MyString s;
	ifstream in2("Text.txt");
	assert(in2);
	while (in2.peek() == '#') {
		in2.ignore(128, '\n');
	}
	s.read(in2, '\n');
	while (in2) {
		cout << "Read string = " << s << endl;
		s.read(in2, '\n');
	}
	in2.close();

}//end main
