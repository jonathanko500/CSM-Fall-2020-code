//client
/*
Jonathan Ko
11/23/2020
CIS 278
Assignment #14
This program is called MyString
This program uses dynamic memory and creating objects of strings/chars
The program creates an object that lets the compiler determine the number of characters in that string
The users is also allowed to
assign other of similar object with the = operator
assign 1 new characters in the string obj
the object is compatible with <<
copy an object
*/
#include <fstream>
#include <cctype>      // for toupper()
#include <string>     
#include <cassert>
#include <iostream>
#include "MyString.h"
using namespace std;
using namespace cs_mystring;

void BasicTest();
void ConcatTest();
void CopyTest();
MyString AppendTest(const MyString& ref, MyString val);
string boolString(bool convertMe);


int main()
{
    BasicTest();
    ConcatTest();
    CopyTest();
}


string boolString(bool convertMe) {
    if (convertMe) {
        return "true";
    }
    else {
        return "false";
    }
}


void BasicTest()
{
    MyString s;
    int stringLength;
    cout << "----- Testing basic String creation & printing" << endl;

    const MyString strs[] =
    { MyString("Wow"), MyString("C++ is neat!"),
     MyString(""), MyString("a-z") };


    for (int i = 0; i < 4; i++) {
        cout << "string [" << i << "] = " << strs[i] << endl;
    }



    cout << endl << "----- Now reading MyStrings from file" << endl;

    cout << endl << "----- first, word by word" << endl;
    ifstream in("mystring.txt");
    assert(in);
    while (in.peek() == '#') {
        in.ignore(128, '\n');
    }
    in >> s;
    while (in) {
        cout << "Read string = " << s << endl;
        in >> s;
    }
    in.close();



    cout << endl << "----- now, line by line" << endl;
    ifstream in2("mystring.txt");
    assert(in2);
    while (in2.peek() == '#') {
        in2.ignore(128, '\n');
    }
    s.read(in2, '\n');
    while (in2) {
        cout << "Read string = " << s << endl;
        s.read(in2, '\n');
    }
    in2.close();




    cout << endl << "----- Testing access to characters (using const)" << endl;
    const MyString s1("abcdefghijklmnopqsrtuvwxyz");
    cout << "Whole string is " << s1 << endl;
    cout << "now char by char: ";
    stringLength = s1.Size();
    for (int i = 0; i < stringLength; i++) {
        cout << s1[i];
    }



    cout << endl << "----- Testing access to characters (using non-const)" << endl;
    MyString s2("abcdefghijklmnopqsrtuvwxyz");
    cout << "Start with " << s2;
    stringLength = s2.Size();
    for (int i = 0; i < stringLength; i++) {
        s2[i] = toupper(s2[i]);
    }
    cout << " and convert to " << s2 << endl;
}











void ConcatTest()
{
    cout << "\n----- Testing concatentation on MyStrings\n";

    const MyString s[] =
    { MyString("outrageous"), MyString("milk"), MyString(""),
    MyString("cow"), MyString("bell") };
    /*
    for (int i = 0; i < 4; i++) {
        cout << s[i] << " + " << s[i + 1] << " = " << s[i] + s[i + 1] << endl;
    }
    */
    cout << "\n----- Testing concatentation between MyString and char *\n";

    const MyString a("abcde");
    const char* b = "XYZ";
    //cout << a << " + " << b << " = " << a + b << endl;
    //cout << b << " + " << a << " = " << b + a << endl;

    cout << "\n----- Testing shorthand concat/assign on MyStrings\n";

    MyString s2[] =
    { MyString("who"), MyString("what"), MyString("WHEN"),
    MyString("Where"), MyString("why") };

    for (int i = 0; i < 4; i++) {
        cout << s2[i] << " += " << s2[i + 1] << " = ";
        cout << (s2[i] += s2[i + 1]) << "and";
        cout << s2[i] << endl;
    }

    cout << "\n----- Testing shorthand concat/assign using char *\n";
    MyString u("I love ");
    const char* v = "programming";
    cout << u << " += " << v << " = ";
    cout << (u += v) << endl;
}









MyString AppendTest(const MyString& ref, MyString val)
{
    val[0] = 'B';
    return val + ref;
}







void CopyTest()
{
    cout << "\n----- Testing copy constructor and operator= on MyStrings\n";

    MyString orig("cake");


    MyString copy(orig);    // invoke copy constructor

    copy[0] = 'f';  // change first letter of the *copy*
    cout << "original is " << orig << ", copy is " << copy << endl;


    MyString copy2;      // makes an empty string

    copy2 = orig;        // invoke operator=
    copy2[0] = 'f';      // change first letter of the *copy*
    cout << "original is " << orig << ", copy is " << copy2 << endl;

    copy2 = "Copy Cat";
    copy2 = copy2;        // copy onto self and see what happens
    cout << "after self assignment, copy is " << copy2 << endl;


    cout << "Testing pass & return MyStrings by value and ref" << endl;
    MyString val = "winky";
    MyString sum = AppendTest("Boo", val);
    cout << "after calling Append, sum is " << sum << endl;
    cout << "val is " << val << endl;
    val = sum;
    cout << "after assign,  val is " << val << endl;

}



/*
int main()
{//start main

	//construct MyString object
	MyString x;
	MyString y("hunter");


	//test function to return num of characters in word
	cout << x << " = x has " << x.Size() << " characters" << endl;
	cout << y << " = y has " << y.Size() << " characters" << endl;

	//test to construct object w/ const string
	const MyString w("wizards");
	cout << w.Size() << endl;
	MyString z(w);
	cout << z << " = z has " << z.Size() << " characters" << endl;

	//test [] operator
	y[0] = 'H';
	y[1] = 'U';
	cout << y << " = y has " << y.Size() << " characters" << endl;;

	//test = operator
	x = z;
	cout << x << " = x has " << x.Size() << " characters" << endl;

	//test + operator
	cout << y + y << endl;



	//test read
	MyString s;
    cout << endl << "----- now, line by line" << endl;
    ifstream in2("mystring.txt");
    assert(in2);
    while (in2.peek() == '#') {
        in2.ignore(128, '\n');
    }
    s.read(in2, '\n');
    while (in2) {
        cout << "Read string = " << s << endl;
        s.read(in2, '\n');
    }
    in2.close();

}//end main
*/
