//Header file

/*
This class resembles a fraction. 
Two private int variables that represents the numerator and denominator.
1 default constructor making the numerator set to 0 and denominator set to 1.
Another constuuctor set to make numerator and denominator set to whatever value is wwanted
4 basic arithmetic functions: +,-,*,/
a print and isEqualTo function


     Fraction();
      post: The calling object has been created and initialized to 0/1        
    
      Fraction(int x, int y);
        post: The calling object has been created and initialized so that the Fraction's
            numerator is x and denominator is y
    
    
      const void print() const;
        post: The calling object has been printed to the console window in the format numerator/denominator
            used for const obj

      void print();
        post: The calling object has been printed to the console window in the format numerator/denominator
            used for regular obj
    
    
      bool isEqualTo(const Fraction x);  
        post: Returns true if the calling object is the equal to Fraxtion x
               
      Fraction addedTo(Fraction x);
        post: return the two fractions added togther

      Fraction subtract(Fraction x);
        post: return the two fractions subtracted togther

      Fraction multipliedBy(Fraction x);
        post: return the two fractions multiplied togther

      Fraction dividedBy(Fraction x);
        post: return the two fractions divided togther

      const Fraction multipliedBy(Fraction x) const;
        post: return the two fractions multiplied togther
            used for const obj
*/


#ifndef FRACTION_H
#define FRACTION_H


//declare class
class Fraction
{//start class
	//initialize private variable
	private:
		int top;//numerator
		int bottom;//denominator
		void simplify();//simplify fraction
	//initialize functions
	public:
		Fraction();
		Fraction(int x, int y);
		Fraction addedTo(Fraction x);
		Fraction subtract(Fraction x);
		Fraction multipliedBy(Fraction x);
		Fraction dividedBy(Fraction x);
		bool isEqualTo(const Fraction x);		
		void print();
		const void print()const;
		const Fraction multipliedBy(Fraction x) const;
};//end class

#endif

