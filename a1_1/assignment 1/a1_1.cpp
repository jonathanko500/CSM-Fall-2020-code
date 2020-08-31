#include <iostream>
using namespace std;

int main()
{
	int date, month, year,yearCheck;
	char sym1, sym2;
	cout << "Enter a date in the format of month/day/2-digit year: ";
	cin >> month >> sym1 >> date >> sym2 >> year;
	if (month * date == year)
	{
		cout << "this year is magic";
	}
	else
	{
		cout << "this year is not magic";
	}
}
/*
* 
* Enter a date in the format of month/day/2-digit year: 6/10/60
* this year is magic
* 
* Enter a date in the format of month/day/2-digit year: 6/10/61
* this year is not magic
* 
* 
* 
*/