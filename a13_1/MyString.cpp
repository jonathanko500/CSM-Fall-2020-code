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
#include "mystring.h"
#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;


namespace cs_mystring
{//start namespace
    MyString::MyString(const char* inString)
    {
        str = new char[strlen(inString) + 1];
        strcpy(str, inString);
    }








    MyString::MyString()
    {
        str = new char[1];
        strcpy(str, "");
    }







    MyString::MyString(const MyString& copyMe)
    {
        str = new char[strlen(copyMe.str) + 1];
        strcpy(str, copyMe.str);
    }






    MyString::~MyString()
    {
        delete[] str;
    }







    ostream& operator<<(ostream& out, const MyString& printMe)
    {
        out << printMe.str;
        return out;
    }









    char MyString::operator[](int index) const
    {
        assert(index >= 0 && index < strlen(str));
        return str[index];
    }







    char& MyString::operator[](int index)
    {
        assert(index >= 0 && index < strlen(str));
        return str[index];
    }







    bool operator<(const MyString& left, const MyString& right)
    {
        return strcmp(left.str, right.str) < 0;
    }





    bool operator>(const MyString& left, const MyString& right)
    {
        return strcmp(left.str, right.str) > 0;
    }





    bool operator<=(const MyString& left, const MyString& right)
    {
        return strcmp(left.str, right.str) <= 0;
    }





    bool operator>=(const MyString& left, const MyString& right)
    {
        return strcmp(left.str, right.str) >= 0;
    }





    bool operator==(const MyString& left, const MyString& right)
    {
        return strcmp(left.str, right.str) == 0;
    }





    bool operator!=(const MyString& left, const MyString& right)
    {
        return strcmp(left.str, right.str) != 0;
    }







    MyString MyString::operator=(const MyString& right)
    {
        if (this != &right) {
            delete[] str;
            str = new char[strlen(right.str) + 1];
            strcpy(str, right.str);
        }

        return *this;
    }






    int MyString::length() const
    {
        return strlen(str);
    }
}//end namespace