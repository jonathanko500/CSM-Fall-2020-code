/*
Jonathan Ko
10/10/2020
CIS 278
Assignment 8
This program is called Game Scores Sort
The compiler will start off by asking the user how many scores are wanted to be put in.
Then the compiler, using dynamic memory allocation, arrays will be in the heap.
The arrays are filled with the names and scores but using a struct variable called "Highscore".
The struct "Highscore" takes in a name and score.
The compiler will sort the names and socres by highest score to lowest score
Then the compiler will print the newly sorted arrays.
*/

#include <iostream>
using namespace std;

//required function
void readData(Highscore scores[], int size);
void sortData(Highscore scores[], int size);
void displayData(Highscore scores[], int size);

//helper functions
int bigFind(Highscore scores[], int size, int inital);

int main()
{//start main
    int numb;
    cout << "Enter amount of scores: ";
    cin >> numb;
    Highscore* score = new Highscore[numb];
    

    readData(&score, numb);
    sortData(&score, numb);
    displayData(&score, numb);
}//end main





/*
Highscore is a struct that makes a variable that is defined by
a string for name
an int for score
*/

struct Highscore
{//start
    string name;
    int point;
};//end







//required functions

/*
* readData
* ask user for data (names and scores) and then makes compiler process it
*/
void readData(Highscore scores[], int size)
{//start
    int point;
    string name;
    for (int i = 0; i < size; i++)
    {//start loop to get info
        cout << "Enter the name for score # " << i + 1 << ": ";
        cin >> name;
        scores[i].name = name;
        cout << "Enter the score for score # " << i + 1 << ": ";
        cin >> point;
        scores[i].point = point;
    }//end loop to get info
    cout << " " << endl;

}//end







/*
* displayData
* displays both name and score
*/
void displayData(Highscore scores[], int size)
{//start
    cout << "Top scores" << endl;
    for (int i = 0; i < size; i++)
    {//start displaying sorted names/scores
        cout << scores[i].name << ": " << scores[i].point << endl;
    }//end displaying scores
}//end







 /*
* sortData
* sorts name and score based on highest score to lowest score
*/
void sortData(Highscore scores[], int size)
{//start
    int big;
    for (int i = 0; i < size - 1; i++)
    {//start looking + swapping through array
        big = bigFind(&scores, size, i);
        swap(scores[big].name, scores[i].name);
        swap(scores[big].point, scores[i].point);

    }//end looking/swapping
}//end







 //helper function
/*
* bigFind
* //find the biggest score within score array
*/
int bigFind(Highscore scores[], int size, int inital)
{//start
    int start = inital;
    for (int i = start + 1; i < size; i++)
    {//look through array
        if (scores[i].point > scores[start].point)
        {
            start = i;
        }
    }//end look 
    return start;
}//end







