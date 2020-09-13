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
	//4 > full > straight > 
	if (containsFourOfaKind(hand) == true)
	{
		cout << "You have a four of a kind";
	}
	else if (containsThreeOfaKind(hand) == true)
	{
		cout << "You have a three of a kind";
	}
	else if (containsTwoPair(hand)==true)
	{
		cout << "You have two pairs";
	}	
	else if (containsPair(hand)==true)
	{
		cout << "You have a pair";
	}	
	else
	{
		cout << "You have a high card";
	}
}//end main

//required funciton
bool containsPair(const int hand[])
{//start
	for (int i = 0; i < NUMBHAND-1; i++)
	{//start search
		for (int j = i + 1; j < NUMBHAND; j++)
		{//start card check
			if (hand[i] == hand[j])
			{
				return true;
			}
		}//end card check
	}//end search
	return false;
}//end

bool containsTwoPair(const int hand[])
{//start
	int numbPair = 0;
	for (int i = 0; i < NUMBHAND - 1; i++)
	{//start search
		for (int j = i + 1; j < NUMBHAND; j++)
		{//start card check
			if (hand[i] == hand[j])
			{
				numbPair++;
			}
		}//end card check
	}//end search
	if (numbPair == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}//end

bool  containsThreeOfaKind(const int hand[])
{//start
	for (int i = 0; i < NUMBHAND - 1; i++)
	{//start search
		for (int j = i + 1; j < NUMBHAND; j++)
		{//start card check for 2nd card
			for (int k = j + 1; k < NUMBHAND ; k++)
			{//start card check for 3rd card
				if (hand[i] == hand[j] && hand[i] == hand[k])
				{
					return true;
				}
			}//end card check for 3rd card
		}//end card check for 2nd card
	}//end search
	return false;
}//end

bool  containsFourOfaKind(const int hand[])
{//start
	for (int i = 0; i < NUMBHAND - 1; i++)
	{//start search
		for (int j = i + 1; j < NUMBHAND; j++)
		{//start card check for 2nd card
			for (int k = j + 1; k < NUMBHAND; k++)
			{//start card check for 3rd card
				for (int x = k + 1; x < NUMBHAND; x++)
				{//start card check for 4th card
					if (hand[i] == hand[j] && hand[i] == hand[k] && hand[i]==hand[x])
					{
						return true;
					}
				}
				
			}//end card check for 3rd card
		}//end card check for 2nd card
	}//end search
	return false;
}//end






