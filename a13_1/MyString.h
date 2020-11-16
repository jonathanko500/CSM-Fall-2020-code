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

		//declare functions +constructor
		public:
			//function
			MyString();
			MyString(const char* term);
			MyString(const MyString& term);
			int Size();
			void setData(const char* term, int num);
			//operator overload
			friend ostream& operator<<(ostream& sign, const MyString& x);
	};//end claass
	

}//end namespace

#endif
