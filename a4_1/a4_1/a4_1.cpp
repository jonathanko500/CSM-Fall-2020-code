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

//helper function
void cardCounterZeroFiller(int count[]);
void cardCounter(int count[], const int hand[]);
bool cardCounterCheck(int count[], int type);
bool twoPairCheck(int count[]);
bool straightCheck(int count[]);

const int NUMBHAND = 5;//hand user gets
const int TOTALOPTION = 8;//numb of cards allowed to be played (2-9)


int main()
{//start main
	int hand[NUMBHAND];
	int card;
	bool check;
	char again = 'y';
	do
	{
		cout << "Enter " << NUMBHAND << " numeric cards, no face cards. Use 2 - 9." << endl;
		for (int i = 0; i < NUMBHAND; i++)//loop to ask for numbers and make array
		{//start loop
			cout << "Card " << i + 1 << ": ";
			cin >> card;
			hand[i] = card;
		}//end loop	
		//4 > full > straight > 3 > 2 pair > pair > high
		if (containsFourOfaKind(hand) == true)
		{//4 kind
			cout << "You have a four of a kind";
		}
		else if (containsFullHouse(hand) == true)
		{//full house
			cout << "You have a full house";
		}
		else if (containsStraight(hand) == true)
		{//straight
			cout << "You have a straight";
		}
		else if (containsThreeOfaKind(hand) == true)
		{//3 kind
			cout << "You have a three of a kind";
		}
		else if (containsTwoPair(hand) == true)
		{//2 pair
			cout << "You have two pairs";
		}
		else if (containsPair(hand) == true)
		{//pair
			cout << "You have a pair";
		}
		else
		{//high card
			cout << "You have a high card";
		}
		cout << endl;
		cout << "again (y/n): ";
		cin >> again;
	} while (again == 'y');
	
}//end main

//helper function
void cardCounterZeroFiller(int count[])//makes array all 0
{//start
	for (int i = 0; i < TOTALOPTION; i++)
	{
		count[i] = 0;
	}
	/*which element is tracking which number
	* count[0]=2
	* count[1]=3
	* count[2]=4
	* count[3]=5
	* count[4]=6
	* count[5]=7
	* count[6]=8
	* count[7]=9
	*/
}//end
void cardCounter(int count[], const int hand[])
{//start
	cardCounterZeroFiller(count);
	for (int i = 0; i < NUMBHAND; i++)
	{//start search through hand
		/*which element is tracking which number
		* count[0]=2
		* count[1]=3
		* count[2]=4
		* count[3]=5
		* count[4]=6
		* count[5]=7
		* count[6]=8
		* count[7]=9
		*/
		if (hand[i] == 2)
		{//2
			count[0]++;
		}
		else if (hand[i] == 3)
		{//3
			count[1]++;
		}
		else if (hand[i] == 4)
		{//4
			count[2]++;
		}
		else if (hand[i] == 5)
		{//5
			count[3]++;
		}
		else if (hand[i] == 6)
		{//6
			count[4]++;
		}
		else if (hand[i] == 7)
		{//7
			count[5]++;
		}
		else if (hand[i] == 8)
		{//8
			count[6]++;
		}
		else if (hand[i] == 9)
		{//9
			count[7]++;
		}
	}//end serach through hand
}//end
bool cardCounterCheck(int count[], int type)//check for pair, 3 kind, 4 kind
{//start
	//type = to see if checking for pair, 3 kind, or 4 kind
	for (int i = 0; i < TOTALOPTION; i++)
	{//start counter check
		if (count[i] == type)
		{
			return true;
		}
	}
	return false;
}//end
bool twoPairCheck(int count[])//check hand if there are two pairs
{//start

	int numbPair = 0;
	for (int i = 0; i < TOTALOPTION; i++)
	{//start counter serach
		if (count[i] == 2)
		{//check to see which element is a pair
			numbPair++;
		}
	}//end counter search
	if (numbPair == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}//else
bool straightCheck(int count[])
{//start
	for (int i = 0; i < TOTALOPTION; i++)
	{//start counter search
		/*which element is tracking which number
		* count[0]=2
		* count[1]=3
		* count[2]=4
		* count[3]=5
		* count[4]=6
		* count[5]=7
		* count[6]=8
		* count[7]=9
		 */
		if (count[i] == 1 && count[i + 1] == 1 && count[i + 2] == 1 && count[i + 3] == 1 && count[i + 4] == 1)
		{
			return true;
		}
	}//end counter search
	return false;
}//end

//*******************line between types of function***********************

//required funciton
bool containsPair(const int hand[])
{//start
	int count[TOTALOPTION];
	cardCounter(count, hand);
	if (cardCounterCheck(count, 2))
	{
		return true;
	}
	return false;
}//end

bool containsTwoPair(const int hand[])
{//start
	int count[TOTALOPTION];
	cardCounter(count, hand);
	if (twoPairCheck(count) == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}//end

bool containsThreeOfaKind(const int hand[])
{//start
	int count[TOTALOPTION];
	cardCounter(count, hand);
	if (cardCounterCheck(count, 3))
	{
		return true;
	}
	return false;
}//end

bool containsFourOfaKind(const int hand[])
{//start
	int count[TOTALOPTION];
	cardCounter(count, hand);
	if (cardCounterCheck(count, 4))
	{
		return true;
	}
	return false;
}//end

bool containsFullHouse(const int hand[])
{//start
	if (containsPair(hand) == true && containsThreeOfaKind(hand) == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}//end

bool containsStraight(const int hand[])
{//start
	int count[TOTALOPTION];
	cardCounter(count, hand);
	if (straightCheck(count) == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}//end

/*
*******************output examples*********************
 Enter 5 numeric cards, no face cards. Use 2 - 9.
Card 1: 4
Card 2: 8
Card 3: 2
Card 4: 3
Card 5: 9
You have a high card
again (y/n): y
Enter 5 numeric cards, no face cards. Use 2 - 9.
Card 1: 2
Card 2: 4
Card 3: 6
Card 4: 5
Card 5: 5
You have a pair
again (y/n): y
Enter 5 numeric cards, no face cards. Use 2 - 9.
Card 1: 3
Card 2: 6
Card 3: 9
Card 4: 3
Card 5: 6
You have two pairs
again (y/n): y
Enter 5 numeric cards, no face cards. Use 2 - 9.
Card 1: 2
Card 2: 5
Card 3: 5
Card 4: 8
Card 5: 5
You have a three of a kind
again (y/n): y
Enter 5 numeric cards, no face cards. Use 2 - 9.
Card 1: 4
Card 2: 8
Card 3: 5
Card 4: 6
Card 5: 7
You have a straight
again (y/n): y
Enter 5 numeric cards, no face cards. Use 2 - 9.
Card 1: 9
Card 2: 6
Card 3: 6
Card 4: 9
Card 5: 9
You have a full house
again (y/n): y
Enter 5 numeric cards, no face cards. Use 2 - 9.
Card 1: 5
Card 2: 5
Card 3: 5
Card 4: 4
Card 5: 5
You have a four of a kind
again (y/n): n
* 
*/
