//header
#include <iostream>
#ifndef FRACTION_H
#define FRACTION_H
using namespace std;


namespace cs_fraction
{//start namespace
	class Fraction
	{//start class
		//initialize private variable + function
		private:
			int top;//numerator
			int bottom;//denominator
			void simplify();//simplify fractions
		//initialize overloaded operator + function + constructor(s)
		public:
			//constructors
			Fraction();
			Fraction(int x = 0, int y = 1);
			//<<
			ostream& operator<<(ostream& sign);
			void print();
			//operators
			Fraction operator+ (const Fraction x) const;
			Fraction operator- (const Fraction x) const;
			Fraction operator* (const Fraction x) const;
			Fraction operator/ (const Fraction x) const;
			//inequality
			bool operator< (const Fraction x) const;
			bool operator<= (const Fraction x) const;
			bool operator> (const Fraction x) const;
			bool operator>= (const Fraction x) const;
			bool operator== (const Fraction x) const;
			bool operator!= (const Fraction x) const;
			//increment + decrement
			Fraction operator++();
			Fraction operator++(int);
			Fraction operator--();
			Fraction operator--(int);
	};//end class
}//end namespace
#endif