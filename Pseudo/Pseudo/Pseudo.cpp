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
	else if (containsFullHouse(hand)==true)
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