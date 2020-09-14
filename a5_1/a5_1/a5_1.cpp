/*
Jonathan Ko
9/14/2020
CIS 278
Assignment 5

This program is called Game Scores Sort

Description


*/

#include <iostream>
using namespace std;

//required function
void readData(string names[], int scores[], int size);
void sortData(string names[], int scores[], int size);
void displayData(const string names[], const int scores[], int size);

//helper functions
int bigFind(int scores[], int size, int inital);
void nameSwap(string names[], int scores[], int size, int inital);

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
        nameSwap(names, scores, size, i);
    }//end looking/swapping
}//end

//helper function
int bigFind(int scores[], int size, int inital)
{//start
    int start = inital;
    for (int i = start + 1; i < size; i++)
    {
        if (scores[start] < scores[i])
        {
            start = i;
        }
    }
    return start;
}//end


void nameSwap(string names[], int scores[], int size, int inital)
{//start
    int change;
    string temp;
    for (int i = 0; i < size - 1; i++)
    {//start looking through arrays
        change = bigFind(scores, size, i);
        temp = names[i];
        if (names[i] != temp)
        {
            names[i] = temp;
        }
    }

}//end

/*selection sort
* 
    void sort(int list[], int numItems)
    {
        for (int count = 0; count < numItems - 1; count++){
            swap(list[indexOfSmallest(list, count, numItems)],list[count]);
        }

    }


    int indexOfSmallest(const int list[], int startingIndex, int numItems)
    {
        int targetIndex = startingIndex;
    
        for (int i = startingIndex + 1; i < numItems; i++){
            if (list[i] < list[targetIndex]){
                targetIndex = count;
            }
        }
    
        return targetIndex;
    }


    */
