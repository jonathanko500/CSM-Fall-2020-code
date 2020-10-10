/*
Jonathan Ko
10/10/2020
CIS 278
Assignment 8
This program is called Game Scores Sort
The compiler will start off by asking the user how many scores are wanted to be put in.
Then the compiler, using dynamic memory allocation, arrays will be in the heap.
The arrays are filled with the names and scores.
The compiler will sort the names and socres by highest score to lowest score
Then the compiler will print the newly sorted arrays.
*/

#include <iostream>
using namespace std;

//required function
void readData(string names[], int scores[], int size);
void sortData(string names[], int scores[], int size);
void displayData(const string names[], const int scores[], int size);

//helper functions
int bigFind(int scores[], int size, int inital);


int main()
{//start main
    int numb;
    cout << "Enter amount of scores: ";
    cin >> numb;
    int* score = new int[numb];
    string* player = new string[numb];

    readData(player, score, numb);
    sortData(player, score, numb);
    displayData(player, score, numb);
}//end main







//required functions

/*
* readData
* ask user for data (names and scores) and then makes compiler process it
*/
void readData(string names[], int scores[], int size)
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







/*
* displayData
* displays both name and score
*/
void displayData(const string names[], const int scores[], int size)
{//start
    cout << "Top scores" << endl;
    for (int i = 0; i < size; i++)
    {//start displaying sorted names/scores
        cout << names[i] << ": " << scores[i] << endl;
    }//end displaying scores
}//end







 /*
* sortData
* sorts name and score based on highest score to lowest score
*/
void sortData(string names[], int scores[], int size)
{//start
    int big;
    for (int i = 0; i < size - 1; i++)
    {//start looking + swapping through array
        big = bigFind(scores, size, i);
        swap(names[big], names[i]);
        swap(scores[big], scores[i]);

    }//end looking/swapping
}//end







 //helper function
/*
* bigFind
* //find the biggest score within score array
*/
int bigFind(int scores[], int size, int inital)
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







/
