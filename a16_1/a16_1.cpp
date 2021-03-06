/*
Jonathan Ko
12/7/2020
CIS 278
Assignment 16.1

This program is called reverse

The compiler is given an array of array of characters..
The compiler uses a recursive function that switches the order of the array into the reverse order

*/

#include <iostream>
#include<string>

using namespace std;

void reverseWithinBounds(char list[], int start, int end);
void reverseCstring(char list[]);


int main()
{//start
	char list[5] = { 'A','B','C','D','E' };
	reverseCstring(list);
	int size = sizeof(list) / sizeof(list[0]);
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << endl;
	}
}//main






//switches array elements within boundaries
void reverseWithinBounds(char list[], int start, int end)
{//start
	if (start >= end)
	{//base case
		swap(list[start], list[end]);
	}
	else
	{//recursion
		swap(list[start], list[end]);
		start++;
		end--;
		reverseWithinBounds(list, start, end);
	}
}//end






//reverse the entire string
void reverseCstring(char list[])
{//start
	int size = sizeof(list) / sizeof(list[0]);
	reverseWithinBounds(list, 0, size);
}//end



/*
********ouput*************
E
D
C
B
A

*/