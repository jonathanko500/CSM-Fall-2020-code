#include <iostream>
using namespace std;

class Fraction
{//start class
	//initialize private variable
private:
	int top;//numerator
	int bottom;//denominator
//initialize functions
public:
	void set(int x, int y);
	Fraction addedTo(Fraction x);
	Fraction subtract(Fraction x);
	Fraction multipliedBy(Fraction x);
	Fraction dividedBy(Fraction x);
	bool isEqualTo(Fraction x);
	void print();
};//end class


//declare class functions

/*
sets numerator and denominator for declared fraction
*/
void Fraction::set(int x, int y)
{//start
	top = x;
	bottom = y;
}//end





/*
prints the 2 variables in fraction form with "/"
*/
void Fraction::print()
{//start
	cout << top << "/" << bottom;
}//end





/*
takes fraction argument and adds the two fractions
*/
Fraction Fraction::addedTo(Fraction x)
{//start
	int t = (top * x.bottom) + (x.top * bottom);//numerator
	int b = bottom * x.bottom;//denominator
	Fraction add;
	add.set(t, b);
	return add;
}//end






/*
takes fraction argument and subtract the two fractions
*/
Fraction Fraction::subtract(Fraction x)
{//start
	int t = (top * x.bottom) - (x.top * bottom);//numerator
	int b = bottom * x.bottom;//denominator
	Fraction sub;
	sub.set(t, b);
	return sub;
}//end






/*
takes fraction argument and multiplies the two fractions
*/
Fraction Fraction::multipliedBy(Fraction x)
{//start
	int t = top * x.top;//numerator
	int b = bottom * x.bottom;//denominator
	Fraction multi;
	multi.set(t, b);
	return multi;
}//end






/*
takes fraction argument and divides the two fractions
*/
Fraction Fraction::dividedBy(Fraction x)
{//start
	int t = top * x.bottom;//numerator
	int b = bottom * x.top;//denominator
	Fraction divi;
	divi.set(t, b);
	return divi;
}//end






/*
takes fraction and compares to see if both fractions are equal
*/
bool Fraction::isEqualTo(Fraction x)
{//start
	if (top * x.bottom == bottom * x.top)
	{//compare if (frac a numerator * frac b denomiator) = (frac a denominator * frac b numerator)
		return true;
	}
}//end






int main()
{//start main
	/*
	declare variables
	*/
	Fraction f1;//fraction a
	f1.set(9, 8);
	cout << "fraction f1 is ";
	f1.print();
	cout << endl;
	Fraction f2;//fraction b
	f2.set(2, 3);
	cout << "fraction f2 is ";
	f2.print();
	cout << endl;
	Fraction result;//fraction showing math between a and b
	/*
	class function tester
	*/

	//mulitplyBy test
	cout << "The product of ";
	f1.print();
	cout << " and ";
	f2.print();
	cout << " is ";
	result = f1.multipliedBy(f2);
	result.print();
	cout << endl;

	//divideBy test
	cout << "The quotient of ";
	f1.print();
	cout << " and ";
	f2.print();
	cout << " is ";
	result = f1.dividedBy(f2);
	result.print();
	cout << endl;

	//addedTo test
	cout << "The sum of ";
	f1.print();
	cout << " and ";
	f2.print();
	cout << " is ";
	result = f1.addedTo(f2);
	result.print();
	cout << endl;

	//subtract test
	cout << "The difference of ";
	f1.print();
	cout << " and ";
	f2.print();
	cout << " is ";
	result = f1.subtract(f2);
	result.print();
	cout << endl;

	//isEqualTo test
	if (f1.isEqualTo(f2))
	{
		cout << "The two fractions are equal." << endl;
	}
	else
	{
		cout << "The two fractions are not equal." << endl;
	}
}//end main