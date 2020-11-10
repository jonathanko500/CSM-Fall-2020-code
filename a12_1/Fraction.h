//header
/*
This class resembles a fraction.
Two private int variables that represents the numerator and denominator.
1 default constructor making the numerator set to 0 and denominator set to 1.
Another constuuctor set to make numerator and denominator set to whatever value is wanted
4 operator that are overloaded for arithemtic 
6 inequalities that are overloaded to allow fraction object to be compared
increment/decrement operator overloaded to have fraction incremented/decremented by 1
<<
		Fraction();
			post: The calling object has been created and initialized to 0/1

		Fraction(int x = 0, int y = 1);
			post: The calling object has been created and initialized so that the Fraction's
				numerator is x and denominator is y
				however, if one of the parameters are not put in, then the numerator will be enterd as 0 or the denominator will be enterdd as 1

		friend ostream& operator<<(ostream& sign, const Fraction& x);
			post: This operator overloading function allows the Fraction object to be printed using the << 

		Fraction operator+ (const Fraction x) const;
			post: This operator overloading function allows the Fraction object to be added using the + sign
		Fraction operator- (const Fraction x) const;
			post: This operator overloading function allows the Fraction object to be subtracted using the - sign
		Fraction operator* (const Fraction x) const;
			post: This operator overloading function allows the Fraction object to be multiplyed using the * sign
		Fraction operator/ (const Fraction x) const;
			post: This operator overloading function allows the Fraction object to be divided using the / sign
	
	    bool operator< (const Fraction x) const;
			post: This operator overloading function allows the Fraction object to be compared and return true/false if the Fraction object is <
		bool operator<= (const Fraction x) const;
			post: This operator overloading function allows the Fraction object to be compared and return true/false if the Fraction object is <=
		bool operator> (const Fraction x) const;
			post: This operator overloading function allows the Fraction object to be compared and return true/false if the Fraction object is >
		bool operator>= (const Fraction x) const;
			post: This operator overloading function allows the Fraction object to be compared and return true/false if the Fraction object is >=
		bool operator== (const Fraction x) const;
			post: This operator overloading function allows the Fraction object to be compared and return true/false if the Fraction object is ==
		bool operator!= (const Fraction x) const;
			post: This operator overloading function allows the Fraction object to be compared and return true/false if the Fraction object is !=

		Fraction operator++();
			pre: allows Fraction object to usable with ++
		Fraction operator++(int);
			post: Fraction object is incremented by 1 (+1)
		Fraction operator--();
			pre: allows Fraction object to usable with --
		Fraction operator--(int);
			post: Fraction object is decremented by 1 (-1)
*/
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
			friend ostream& operator<<(ostream& sign, const Fraction& x);
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