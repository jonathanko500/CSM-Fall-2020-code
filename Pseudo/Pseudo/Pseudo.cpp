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
void cardCounterFiller(int count[]);
void cardCounter(int count[], const int hand[]);
bool cardCounterCheck(int count[], int type);

const int NUMBHAND = 5;//hand user gets
const int TOTALOPTION = 8;//numb of cards allowed to be played (2-9)



int main()
{//start main
	int hand[NUMBHAND];
	int card;
	bool check;
	cout << "Enter " << NUMBHAND << " numeric cards, no face cards. Use 2 - 9." << endl;
	for (int i = 0; i < NUMBHAND; i++)//loop to ask for numbers and make array
	{//start loop
		cout << "Card " << i + 1 << ": ";
		cin >> card;
		hand[i] = card;
	}//end loop	
	//4 > full > straight > 3 > 2 pair > pair > high
	/*if (containsFourOfaKind(hand) == true)
	{
		cout << "You have a four of a kind";
	}
	else if (containsThreeOfaKind(hand) == true)
	{
		cout << "You have a three of a kind";
	}
	else if (containsTwoPair(hand) == true)
	{
		cout << "You have two pairs";
	}
	else*/ if (containsPair(hand) == true)
	{
		cout << "You have a pair";
	}
	else
	{
		cout << "You have a high card";
	}
}//end main

//helper function
void cardCounterFiller(int count[])//makes array all 0
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
	cardCounterFiller(count);
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

	return true;
}//end