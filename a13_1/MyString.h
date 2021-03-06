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
	2x [] to allow change of characters (const object or not).

6 inequality operator
	< test to see if less than
	<= test to see if less than or equal to
	> test to see if greater than
	>= test to see if greater than or equal to
	== test to see if equal to
	!= test to see if not equal to


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

#endif

/*
*****************OUTPUT********************
----- Testing basic String creation & printing
string [0] = Wow
string [1] = C++ is neat!
string [2] =
string [3] = a-z

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

----- Testing copy constructor and operator= on MyStrings
original is cake, copy is fake
original is cake, copy is fake
after self assignment, copy is Copy Cat
Testing pass & return MyStrings by value and ref
after calling Append, sum is Binky
val is winky
after assign,  val is Binky

*/
