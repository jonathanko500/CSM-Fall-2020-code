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
	char str1[] = "I hate writing essays";
	cout << "str1 is: ";
	for (int i = 0; i < strlen(str1); i++)
	{
		cout << str1[i];
	}
	cout << endl;
	//numLetter tester
	cout << "There are " << numLetters(str1) << " letters in str1. " << endl;
	//lastIndexOF tester
	if (lastIndexOf(str1, 's') == 1)
	{
		cout << "the last letter is what you are looking for in str1" << endl;
	}
	else
	{
		cout << "no target in str1" << endl;
	}
	//replace tester
	cout << "The number of letters replaced are/is " << replace(str1, 's', 'z') << " in str1" << endl;
	cout << "str1 with replaced letter(s) look like:  ";
	for (int i = 0; i < strlen(str1); i++)
	{
		cout << str1[i];
	}
	cout << endl;
	//toupper tester
	cout << "str1 in all caps look like:  ";
	toupper(str1);
	for (int i = 0; i < strlen(str1); i++)
	{
		cout << str1[i];
	}
	cout << endl;
	//reverse tester
	cout << "str1 backwards and in caps look like:  ";
	reverse(str1);
	for (int i = 0; i < strlen(str1); i++)
	{
		cout << str1[i];
	}
	cout << endl;
	cout << "************************" << endl;
	//palindrome tester
	char str2[] = "AbBa";
	cout << "str2 is ";
	for (int i = 0; i < strlen(str2); i++)
	{
		cout << str2[i];
	}
	cout << endl;
	if (isPalindrome(str2) == true)
	{
		cout << "str2 is a palindrome";
	}
	else
	{
		cout << "str2 is not a palindrome";
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
		if (inString[i] != ' ')
		{
			count++;
		}
	}
	return count;
}//end





/*
lastIndexOf looks at the last index of the string and determines if the target char is the same as the char being looked for
and it returns 1 or -1 if the target char is in the string
*/
int lastIndexOf(const char* inString, char target)
{//start
	if (inString[strlen(inString) - 1] == target)
	{//check last index of string
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
	for (int i = 0; i < strlen(inString); i++)
	{//start looking through string
		letter = toupper(inString[i]);
		inString[i] = letter;
	}//end
}//end






/*
reverse displays the string in reverse order
*/
void reverse(char* inString)
{//start
	int end = strlen(inString);
	for (int i = 0; i < end; i++)
	{//start searching through string
		swap(inString[i], inString[end-1]);
		end--;
	}//end search
}//end





/*
replace does
*/
int replace(char* inString, char target, char replacementChar)
{//start
	int count = 0;
	for (int i = 0; i < strlen(inString); i++)
	{//start comparing
		if (inString[i] == target)
		{//start replace letter and inc counter
			count++;
			inString[i] = replacementChar;
		}//end replace
	}//end search
	//return numb of replacements
	if (count != 0)
	{
		return count;
	}
	else
	{
		return 0;
	}
}//end





/*
isPalindrome determines the string if it is a palindrome
not case sensitive
*/
bool isPalindrome(const char* inString)
{//start
	int start = 0;//first letter
	int end = strlen(inString)-1;//last letter
	while (start < end)
	{//start look through string
		if (tolower(inString[start]) != tolower(inString[end]))
		{
			return false;
		}

		start++;
		end--;
	}//end look
	return true;
}//end



/*output
str1 is: I hate writing essays
There are 18 letters in str1.
the last letter is what you are looking for in str1
The number of letters replaced are/is 3 in str1
str1 with replaced letter(s) look like:  I hate writing ezzayz
str1 in all caps look like:  I HATE WRITING EZZAYZ
str1 backwards and in caps look like:  ZYAZZE GNITIRW ETAH I
************************
str2 is AbBa
str2 is a palindrome
*/