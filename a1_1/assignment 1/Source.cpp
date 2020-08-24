#include <iostream>
using namespace std;

int main()
{

	//variables
	int dayNumb, monthNumb, yearNumb;
	//ask user for date number
	cout << "Enter the date day's number: ";
	cin >> dayNumb;
	//ask user month number
	cout << "Enter the date's month number: ";
	cin >> monthNumb;
	//ask user year in a 2-digit number
	cout << "Enter the date's year number in a 2-digit format: ";
	cin >> yearNumb;
	//print date
	cout << " The date you wrote is ";
	cout << dayNumb << "/" << monthNumb << "/" << yearNumb;

	//output
	/*
	* Enter the date day's number: 2
		Enter the date's month number: 1
		Enter the date's year number in a 2-digit format: 88
		The date you wrote is 2 / 1 / 88
	*/

}