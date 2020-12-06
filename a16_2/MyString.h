#include <iostream>
#ifndef MYSTRING_H
#define MYSTRING_H

namespace cs_mystring
{//start namespace
	class MyString
	{//start class
	public:
		MyString(const char* inString);
		MyString();
		MyString(const MyString& copyMe);
		~MyString();

		friend std::ostream& operator<<(std::ostream& out, const MyString& printMe);
		char operator[] (int index) const;
		char& operator[](int index);

		friend bool operator<(const MyString& left, const MyString& right);
		friend bool operator>(const MyString& left, const MyString& right);
		friend bool operator<=(const MyString& left, const MyString& right);
		friend bool operator>=(const MyString& left, const MyString& right);
		friend bool operator==(const MyString& left, const MyString& right);
		friend bool operator!=(const MyString& left, const MyString& right);
		MyString operator=(const MyString& right);
		int length() const;
	private:
		char* str;
	};//end class
}//end namespace