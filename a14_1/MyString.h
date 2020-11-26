//header
/*
This class resembles a String.
Two private variables: an int for length of string +  char pointer to represent word.
	int len
	char* word
1 default constructor so char pointer point to "" + set length of string to 0.
Another constuctor so char pointer points to a word + set length to the length of the pointed string
Another constuctor that copies a const MyString object and creates another MyString object
1 Function that returns the length of the string
1 Function that dealocates an object
4 overloaded operator
	= is overloaded to assign 1 MyString to another
	<< to allow MyString object to be compatible and printed without a print function
	2x [] to allow change of characters (const object or not)
		MyString();
			post: The calling object has been created and len to 0 and word to ""
		MyString(const char* term);
			post: The calling object has been created and initialized so that the MyString's
				len = length of word
				word = term
		MyString(const MyString& term)
			post: The calling object copies a const Mystring and creates + initialize another MyString
				len = length of word copied
				word = copied term
		int Size();
			post: return length of word
		~MyString();
			post: deallocate memory from the heap
		friend ostream& operator<<(ostream& sign, const Fraction& x);
			post: This overloaded operator function allows the MyString variable word to be printed using the <<
		char operator[](int size) const;
			post: This overloaded operator function allows a single MyString character to be returned and changed
		char& operator[](int size);
			post: This overloaded operator function allows a single MyString character to be returned and changed
		MyString operator= (const MyString& term);
			post: This overloaded operator allows a MyString object to be assigned the same data has another non const MyString object
*/
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
		//Max constant
		static const int MAX_INPUT_SIZE = 127;
		//constructors
		MyString();
		MyString(const char* term);
		MyString(const MyString& term);//big 3 copy constructor
		//function
		int Size();
		const int Size() const;
		void read(std::istream& in, char stop);
		~MyString();//big 3 destructor
		//operator overload
		friend std::ostream& operator<<(std::ostream& sign, const MyString& word);
		friend std::istream& operator>>(std::istream& in, MyString& term);
		char operator[](int size) const;
		char& operator[](int size);
		MyString operator= (const MyString& term);//big 3 assignment operator
		MyString operator+ (const MyString& term);
		MyString operator+= (const MyString& term);
	};//end claass


}//end namespace

#endif

