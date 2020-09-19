/*
Jonathan Ko
9/14/2020
CIS 278
Assignment 5

This program is called Game Scores Sort

The compiler asks for a set number of names and scores.

The compiler makes 2 arrays and fills the array with either the names or scores

Then the compiler sorts both arrays based on the score from greatest to least.

After the sort, the compiler displays both sorted arrays.


*/

#include <iostream>
using namespace std;

//required function
void readData(string names[], int scores[], int size);
void sortData(string names[], int scores[], int size);
void displayData(const string names[], const int scores[], int size);

//helper functions
int bigFind(int scores[], int size, int inital);
void nameSwap(string names[], int scores[], int sizes);

const int NUMBPLAYER = 5;

int main()
{//start main
    string player[NUMBPLAYER];
    int score[NUMBPLAYER];
    readData(player, score, NUMBPLAYER);
}//end main


//required functions
void readData(string names[], int scores[], int size)//ask user for data and then makes compiler process it
{//start
    int point;
    string name;
    for (int i = 0; i < size; i++)
    {//start loop to get info
        cout << "Enter the name for score # " << i + 1 << ": ";
        cin >> name;
        names[i] = name;
        cout << "Enter the score for score # " << i + 1 << ": ";
        cin >> point;
        scores[i] = point;
    }//end loop to get info
    cout << " " << endl;
    sortData(names, scores, size);
    displayData(names, scores, size);
}//end

void displayData(const string names[], const int scores[], int size)//displays both name and score but arragned from highest score to lowest score
{//start
    cout << "Top scores" << endl;
    for (int i = 0; i < size; i++)
    {//start displaying sorted names/scores
        cout << names[i] << ": "<< scores[i] << endl;
    }//end displaying scores
}//end

void sortData(string names[], int scores[], int size)//sorts name and score based on highest score to lowest score
{//start
    for (int i = 0; i < size-1; i++)
    {//start looking + swapping through array
        swap(scores[bigFind(scores,size,i)], scores[i]); 
        nameSwap(names, scores, size);
    }//end looking/swapping
    
}//end

//helper function
int bigFind(int scores[], int size, int inital)//find the biggest score 
{//start
    int start = inital;
    for (int i = start + 1; i < size; i++)
    {//look through array
        if (scores[i] > scores[start])
        {
            start = i;
        }
    }//end look 
    return start;
}//end

void nameSwap(string names[], int scores[], int size)
{//start
    for (int i = 0; i < size; i++)
    {//start look through hand
        for (int j = i + 1; j < size; j++)
        {
            string origin = names[i];
            string next = names[j];
            if (scores[i] < scores[j])
            {
                names[i] = next;
                names[j] = origin;
            }
        }
    }//end look though
}//end

/*output examples
Enter the name for score # 1: tom21
Enter the score for score # 1: 21
Enter the name for score # 2: jake36
Enter the score for score # 2: 36
Enter the name for score # 3: dan92
Enter the score for score # 3: 92
Enter the name for score # 4: john20
Enter the score for score # 4: 20
Enter the name for score # 5: bob47
Enter the score for score # 5: 47

Top scores
tom21: 92
bob47: 47
john21: 36
dan92: 21
jake36: 20

*/