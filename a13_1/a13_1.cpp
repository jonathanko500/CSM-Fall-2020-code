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
	cout << x << " has " << x.Size() << " characters" << endl;
	cout << y << " has " << y.Size() << " characters" << endl;

	//test to construct object w/ const string
	x.setData("titan",5);
	MyString z(x);
	cout << z << " has " << z.Size() << " characters" << endl;

}//end main