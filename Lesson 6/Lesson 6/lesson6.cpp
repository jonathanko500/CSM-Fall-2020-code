#include <iostream>
using namespace std;


void Horizontal(int length)//length = parameter
{
	for (int i = 0; i < length; i++)
	{
		cout << "X";
	}
	cout << endl;
}
void space(int length)
{
	for (int i = 0; i < length; i++)
	{
		if (i == 0||i == length - 1)
		{
			cout << "X";
		}
		else
		{
			cout << " ";
		}
	}
	cout << endl;
}
int main()
{//start main
	int num = 8;
	Horizontal(8);// 8 = parameter
	space(8);
	Horizontal(8);
}//end main

