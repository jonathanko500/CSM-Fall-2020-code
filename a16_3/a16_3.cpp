/*
Jonathan Ko
12/7/2020
CIS 278
Assignment 16.3
This program is called sort
The compiler is given an array of array of numbers and 
The compiler uses a recursive function that switches the order of the array from smallest to largest
*/
#include <iostream>

using namespace std;

int smallIndex(int list[], int start, int end);
void change(int list[],int start,int end);



int main()
{//start
	int numbers[] = { 5, 287, 25, -19, 38 };
	int n = sizeof(numbers) / sizeof(numbers[0]);

	change(numbers, 0, n);
	//printing sorted array 
	for (int i = 0; i < n; i++)
	{
		cout << numbers[i] << " ";
		cout << endl;
	}
}//end







//find index with the smallest number in array of number
int smallIndex(int list[], int start, int end)
{//start
	if (start == end - 1)
	{//base case
		return start;
	}
	if (list[end - 1] > list[start])
	{//check to see if right side of array  > then right side
		return smallIndex(list, start, end - 1);
	}
	else
	{//check to see if left side > right side
		start++;
		return smallIndex(list, start, end);
	}
}//end







//sort array of numbers in ascending order
void change(int list[],int start,int end)
{//start
	
	if (start == end - 1)
	{//base case
		return;
	}
	//swap with smallest index and the next index
	int small = smallIndex(list, start, end);
	swap(list[small], list[start]);
	change(list, start + 1, end);
}//end






/*
***********output***********
-19
5
25
38
287
*/