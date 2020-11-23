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





	//functions
	 //function that return numb characters
	int MyString::Size()
	{//start
		return len;
	}//end






	//destructor
	//big 3
	MyString :: ~MyString()
	{
		delete[] word;
	}
	 
	 
	 
	 
	 
	 //overload operators

	//overload <<	
	ostream& operator<<(std::ostream& sign, const MyString& word)
	{//start
		sign << word.word;
		return sign;
	}//end







	//overloaded >>
	std::istream& operator>>(std::istream& in, MyString& term)
	{//start

		//skips spaces
		while (isspace(in.peek()))
		{
			in.ignore();
		}
		//creates line of MyString characters 
		char temp[MyString::MAX_INPUT_SIZE + 1];
		in.getline(temp, MyString::MAX_INPUT_SIZE, ':');
		delete[] term.word;
		term.word = new char[strlen(temp) + 1];
		strcpy(term.word, temp);

		return in;
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






	
	 //overload +
	MyString MyString :: operator+(const MyString& term)
	{//start
		MyString temp;
		temp.len = len + term.len;
		delete temp.word;
		temp.word = new char[temp.len + 1];
		strcpy(temp.word, term.word);
		strcat(temp.word, term.word);
		return temp;
	}//end






	//overload +=
	MyString MyString :: operator+= (const MyString& term)
	{//start
		*this += term;
		return*this;
	}//end
}//end namespace
