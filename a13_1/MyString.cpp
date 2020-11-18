//implementation
/*
	Class Invariant:
	a MyString object has 2 data members: length of word and pointer pointing at a string
	constructrs that make the object
		default
		regular
		copy
	Size() that returns teh length of word
	overloaded opertor << that allows MyString object to be printed
	overloaded [] to allow a change of 1 character
	~MyString deallocates memory

*/
#pragma warning(disable:4996)
#include <iostream>
#include <cassert>
#include <cstring>
#include "MyString.h"
using namespace std;

namespace cs_mystring
{//start namespace

	//defalut constructor
	MyString::MyString()
	{//start
		len = 0;
		word = new char[1];
		strcpy(word, "");
	}//end






	//constructor
	MyString::MyString(const char* term)
	{//start
		len = strlen(term);
		word = new char[strlen(term) + 1];
		strcpy(word, term);
	}//end






	//function that copies const c-string 
	//big 3
	MyString::MyString(const MyString& term)
	{//start
		len = term.len;
		word = new char[strlen(term.word) + 1];
		strcpy(word, term.word);
	}//end






	 //function that return numb characters
	int MyString::Size()
	{//start
		return len;
	}//end







	//operator overload

	//overload <<	
	ostream& operator<<(std::ostream& sign, const MyString& word)
	{//start
		sign << word.word;
		return sign;
	}//end
	





	//overload [] const
	char MyString :: operator[](int num) const
	{//start
		assert(num >= 0 && num < strlen(word));
		return word[num];
	}//end






	//overload [] const
	char& MyString :: operator[](int num)
	{//start
		assert(num >= 0 && num < strlen(word));
		return word[num];
	}//end





	
	
	//overload =
	//big 3
	MyString MyString :: operator= (const MyString& term)
	{//start
		if (this != &term) {
			len = term.len;
			delete[] word;
			word = new char[strlen(term.word) + 1];
			strcpy(word, term.word);
		}
		return *this;
	}//end






	//destructor
	//big 3
	MyString :: ~MyString()
	{
		delete[] word;
	}
}//end namespace