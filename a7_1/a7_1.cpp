#include <iostream>
using namespace std;


int lastIndexOf(const char* inString, char target);
void reverse(char* inString);
int replace(char* inString, char target, char replacementChar);
bool isPalindrome(const char* inString);
void toupper(char* inString);
int numLetters(const char* inString);


int main()
{//start main
	char str1[] = "Hello there";
	cout << numLetters(str1) << endl;
	cout << lastIndexOf(str1, 'e') << endl;
	toupper(str1);
	reverse(str1);	
	for (int i = 0; i < numLetters(str1); i++)
	{
		cout << str1[i];
	}
	
}//end main





//functions
/*
numLetters is a function that determines the number of letter that are in the string
after counting the numbers, the function returns the number of letters in the string
*/
int numLetters(const char* inString)
{//start
	int count = 0;
	int size = strlen(inString);
	for (int i = 0; i < size; i++)
	{
		count++;
	}
	return count;
}//end





/*
lastIndexOf looks at the last index of the string and determines if the target char is the same as the char being looked for
and it returns 1 or -1 if the target char is in the string
*/
int lastIndexOf(const char* inString, char target)
{//start
	if (inString[numLetters(inString) - 1] == target)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}//end





/*
this functions make the string turn into upper case letters
*/
void toupper(char* inString)
{//start
	char letter;
	for (int i = 0; i < numLetters(inString); i++)
	{
		
		putchar(toupper(inString[i]));
	}
	cout << endl;
}//end






/*
reverse displays the string in reverse order
*/
void reverse(char* inString)
{//start
	int end = numLetters(inString);
	for (int i = 0; i < end; i++)
	{
		swap(inString[i], inString[end-1]);
		end--;
	}
}//end