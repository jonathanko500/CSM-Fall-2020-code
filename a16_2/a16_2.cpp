/*
Jonathan Ko
12/7/2020
CIS 278
Assignment 16.2

This program is called palindrome

The compiler is given an array of array of characters..
The compiler uses a recursive function that switches the order of the array into the reverse order
*/

#include "MyString.h"
#include <cctype>
#include <iostream>
#include <string>
#include <cassert>
using namespace std;
using namespace cs_mystring;

bool isAPalindrome(MyString word,int start, int end);

int main()
{//start main
	bool again = true;
	while (again == true)
	{//start loop
		MyString stop("quit");
		MyString x;
		cout << "Enter a string: ";
		cin >> x;
		if (x == stop)
		{//check to see if loop should continue
			again = false;
		}
		else
		{//no quit then palindrome tester runs
			if (isAPalindrome(x, 0, x.length() - 1))
			{
				cout << x << " is a pali" << endl;
			}
			else
			{
				cout << x << " is not a pali" << endl;
			}
		}		
	}//end loop	
}//end main







//palindrome tester
bool isAPalindrome(MyString word,int start, int end)
{//start
	if (start >= end)
	{//base case
		return true;
	}

	if (toupper(word[start]) != toupper(word[end]))
	{
		//compare the elemetns of the array
		//make all elements of array uppercase
		return false;
	}
	if (ispunct(word[start]) || ispunct(word[end]))
	{//check and ignore punctuaion
		return true;
	}
	/*
	if (isspace(word[start])|| isspace(word[end]))
	{//check and ignore space
		return true;
	}
	*/
	return isAPalindrome(word, start + 1, end - 1);
}//end



/*
**********output********
Enter a string: lo.ol
lo.ol is a pali
Enter a string: loL
loL is a pali
Enter a string: apple
apple is not a pali
Enter a string: quit

*/