//header
#include <iostream>
#ifndef MYSTRING_H
#define MYSTRING_H

namespace cs_mystring
{//start namespace
	class MyString
	{//start class
		//declare private varibles
		private:
			int len;
			char* word;

		//declare functions + constructor + operator overload
		public:
			//function 
			//constructors
			MyString();
			MyString(const char* term);
			MyString(const MyString& term);
			//function
			int Size();
			void setData(const char* term, int num);
			//operator overload
			//friend ostream& operator<<(ostream& sign, const MyString& word);
			char operator[](int size) const;
			char& operator[](int size);
			bool operator< (const MyString term);
	};//end claass
	

}//end namespace

#endif
