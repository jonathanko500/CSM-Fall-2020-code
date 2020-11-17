//client
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
	cout << "object x" << " has " << x.Size() << " characters" << endl;
	cout << "object y" << " has " << y.Size() << " characters" << endl;

	//test to construct object w/ const string
	const MyString w("wizards");
	MyString z(w);
	cout << "object z" << " has " << z.Size() << " characters" << endl;

	//test [] operator
	y[1] = 'H';
	y[2] = 'U';


}//end main