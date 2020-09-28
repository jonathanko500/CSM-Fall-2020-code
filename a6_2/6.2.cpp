/*
Jonathan Ko
9/27/2020
CIS 278
Assignment 5
This program is called Game Scores Sort
The compiler asks for a set number of names and scores.
The compiler makes 2 arrays and fills the array with either the names or scores
With the help of using pointers, both arrays will be sorted from highest score to lowest score.
Then both sorted arrays will be displayed.
*/

#include <iostream>
using namespace std;

//required function
void readData(string names[], int scores[], int size);
void sortData(string names[], int scores[], int size);
void displayData(const string names[], const int scores[], int size);

//helper functions
int bigFind(int scores[], int size, int inital);

const int NUMBPLAYER = 5;

int main()
{//start main
    string player[NUMBPLAYER];
    int score[NUMBPLAYER];
    readData(player, score, NUMBPLAYER);
    sortData(player, score, NUMBPLAYER);
    displayData(player, score, NUMBPLAYER);
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
    int big;
    for (int i = 0; i < size-1; i++)
    {//start looking + swapping through array
        big = bigFind(scores, size, i);
        swap(names[big], names[i]);
        swap(scores[big], scores[i]); 
        
    }//end looking/swapping
}//end

 //helper function
int bigFind(int scores[], int size, int inital)//find the biggest score within score array
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

