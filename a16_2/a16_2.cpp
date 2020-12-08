#include "MyString.h"
#include <cctype>
#include <iostream>
#include <string>
using namespace std;
using namespace cs_mystring;

bool isAPalindrome(MyString word,int start, int end);

int main()
{//start main
	MyString x("Able was I, ere I saw Elba");
	bool check;
	check = isAPalindrome(x, 0, x.length() - 1);
	if (check = true)
	{
		cout << x << " is a pali" << endl;
	}
	else
	{
		cout << x << " is not a pali" << endl;
	}

}//end main






bool isAPalindrome(MyString word,int start, int end)
{//start
	if (start >= end)
	{
		return true;
	}
		

	if (word[start] != word[end])
	{
		return false;
	}
		
	return isAPalindrome(word, start + 1, end - 1);
}//end