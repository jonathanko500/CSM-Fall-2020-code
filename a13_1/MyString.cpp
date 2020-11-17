//implementation
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





	//set data to defualt made object
	void MyString::setData(const char* term, int num)
    {//start
        len = num;
        delete [] word;
        word = new char[strlen(term) + 1];    
        strcpy(word, term);
    }//end






	//operator overload

	//overload <<
	/*
	ostream& operator<<(ostream& sign, const MyString& word)
	{//start
		sign << word.word;
		return sign;
	}//end
	*/





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






	//overload <
	bool MyString :: operator< (const MyString term)
	{//start

	}//end
}//end namespace