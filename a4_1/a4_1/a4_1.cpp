/*
Jonathan Ko
9/10/2020
CIS 278
Assignment 4

This program is called Poker Reader

The compiler will ask the user for 5 number between 2 and 9.

Once the compiler is given the 5 numbers, the compiler will put those numbers into an array.

After the array has been made, the compiler will determine if certain poker hands are true.

The compiler will determine if the hand is true or false based on what the hand is.
The compiler is looking for
pair
two pair
three ok kind
straight
full house
four ok a kind

If one is true, then the compiler will display the hand you have.* 
*/

#include <iostream>
using namespace std;

//required function
bool  containsPair(const int hand[]);
bool  containsTwoPair(const int hand[]);
bool  containsThreeOfaKind(const int hand[]);
bool  containsStraight(const int hand[]);
bool  containsFullHouse(const int hand[]);
bool  containsFourOfaKind(const int hand[]);

const int NUMBHAND = 5;

int main()
{//start main
	int hand [NUMBHAND];
	int card;
	bool check;
	cout << "Enter " << NUMBHAND << " numeric cards, no face cards. Use 2 - 9." << endl;
	for (int i = 0; i < NUMBHAND; i++)//loop to ask for numbers and make array
	{//start loop
		cout << "Card " << i + 1 << ": ";
		cin >> card;
		hand[i] = card;
	}//end loop	
	if (containsPair(hand))
	{
		cout << "You have a pair";
	}
	else
	{
		cout << "You have a high card";
	}
}//end main

bool containsPair(const int hand[])
{//start
	for (int i = 0; i < NUMBHAND-1; i++)
	{//start search
		for (int j = i + 1; j < NUMBHAND; j++)
		{//start compare search
			if (hand[i] == hand[j])
			{
				return true;
			}
		}//end compare search
	}//end search
	return false;
}//end





