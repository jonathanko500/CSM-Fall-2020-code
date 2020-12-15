/*
Jonathan Ko
12/7/2020
CIS 278
Assignment 16.2

This program is called palindrome

The compiler is given an array of array of characters..
The compiler uses a recursive function that switches the order of the array into the reverse order
*/

#include "MyString.h"
#include <cctype>
#include <iostream>
#include <string>
#include <cassert>
using namespace std;
using namespace cs_mystring;

bool isaPalindrome(const MyString& str, int start, int end);

int main()
{
    MyString str;

    str.read(cin, '\n');
    while (str != "quit")
    {
        if (isaPalindrome(str, 0, str.length() - 1))
        {
            cout << str << " is a palindrome." << endl;
        }
        else
        {
            cout << str << " is not a palindrome." << endl;
        }
        str.read(cin, '\n');
    }
    cout << "end of program.";
}




bool isaPalindrome(const MyString& str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    else if (ispunct(str[start]) || isspace(str[start]))
    {
        return isaPalindrome(str, start + 1, end);
    }
    else if (ispunct(str[end]) || isspace(str[end]))
    {
        return isaPalindrome(str, start, end - 1);
    }
    else if (toupper(str[start]) != toupper(str[end]))
    {
        return false;
    }
    else
    {
        return isaPalindrome(str, start + 1, end - 1);
    }
}


/*
**********output********
Enter a string: lo.ol
lo.ol is a pali
Enter a string: loL
loL is a pali
Enter a string: apple
apple is not a pali
Enter a string: quit

*/