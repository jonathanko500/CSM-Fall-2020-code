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


		friend bool operator< (const MyString x, const MyString y);
			post : return true if the the left is < then the right
		friend bool operator<= (const MyString x, const MyString y);
			post : return true if the the left is <= then the right
		friend bool operator> (const MyString x, const MyString y);
			post : return true if the the left is > then the right
		friend bool operator>= (const MyString x, const MyString y);
			post : return true if the the left is >= then the right
		friend bool operator== (const MyString x, const MyString y);
			post : return true if the the left is == then the right
		friend bool operator!= (const MyString x, const MyString y);
			post : return true if the the left is != then the right
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

		//inequality overload
		friend bool operator< (const MyString x, const MyString y);
		friend bool operator<= (const MyString x, const MyString y);
		friend bool operator> (const MyString x, const MyString y);
		friend bool operator>= (const MyString x, const MyString y);
		friend bool operator== (const MyString x, const MyString y);
		friend bool operator!= (const MyString x, const MyString y);
	};//end claass


}//end namespace

#endif

/*
*******************OUTPUT****************
----- Testing basic String creation & printing
string [0] = Wow
string [1] = C++ is neat!
string [2] =
string [3] = a-z

----- Now reading MyStrings from file

----- first, word by word

----- now, line by line
This file has some strings that are used in the string test to checkRead string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
# reading strings from files. The default overloaded >> of your string Read string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
# class should skip over any leading spaces and read characters intoRead string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
# the string object, stopping at the first whitespace character (this isRead string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
# similar to the behavior of >> on char *).  The read method of theRead string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
# string class is a little fancier. It allows client to restrictRead string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
# how many characters at max to read and what character to use as Read string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
# delimiter, so you can stop at newline instead of space, for example.Read string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
# Reading consumes the delimiting character, so the next read starts Read string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
# after that.Read string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
#Read string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
The  first  time  we  willRead string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
    read individual words, next    Read string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o
we read whole linesRead string = This file has some strings that are used in the string test to check
# reading strings from files. The default overloaded >> o

----- Testing access to characters (using const)
Whole string is abcdefghijklmnopqsrtuvwxyz
now char by char:
----- Testing access to characters (using non-const)
Start with abcdefghijklmnopqsrtuvwxyz and convert to abcdefghijklmnopqsrtuvwxyz

----- Testing relational operators between MyStrings
Comparing app to apple
        Is left < right? true
        Is left <= right? true
        Is left > right? false
        Is left >= right? false
        Does left == right? false
        Does left != right ? true
Comparing apple to
        Is left < right? false
        Is left <= right? false
        Is left > right? true
        Is left >= right? true
        Does left == right? false
        Does left != right ? true
Comparing  to Banana
        Is left < right? true
        Is left <= right? true
        Is left > right? false
        Is left >= right? false
        Does left == right? false
        Does left != right ? true
Comparing Banana to Banana
        Is left < right? false
        Is left <= right? true
        Is left > right? false
        Is left >= right? true
        Does left == right? true
        Does left != right ? false

----- Testing relations between MyStrings and char *
Comparing he to hello
        Is left < right? true
        Is left <= right? true
        Is left > right? false
        Is left >= right? false
        Does left == right? false
        Does left != right ? true
Comparing why to wackity
        Is left < right? false
        Is left <= right? false
        Is left > right? true
        Is left >= right? true
        Does left == right? false
        Does left != right ? true

----- Testing concatentation on MyStrings

----- Testing concatentation between MyString and char *

----- Testing shorthand concat/assign on MyStrings
who += what =
*/