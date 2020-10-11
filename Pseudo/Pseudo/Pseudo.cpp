#include <iostream>
using namespace std;

//required function
void readData(Highscore scores[], int size);
void sortData(Highscore scores[], int size);
void displayData(Highscore scores[], int size);


struct Highscore
{//start
    string name;
    int pt;
    Highscore();
};//end


//helper functions
int bigFind(Highscore scores[], int size, int inital);

int main()
{//start main
    int numb,size;
    string name;
    cout << "Enter amount of scores: ";
    cin >> size;
    Highscore* score = new Highscore[size];
    
    readData(&score, size);
    sortData(&score, numb);
    displayData(&score, numb);
}//end main



//required functions

void readData(Highscore scores[], int size)
{//start
    int point;
    string name;
    for (int i = 0; i < size; i++)
    {//start loop to get info
        cout << "Enter the name for score # " << i + 1 << ": ";
        cin >> name;
        cout << "Enter the score for score # " << i + 1 << ": ";
        cin >> point;
        scores[i].name = name;
        scores[i].pt = point;
    }//end loop to get info
    cout << " " << endl;
}//end


void sortData(Highscore scores[], int size)
{//start
    int big;
    for (int i = 0; i < size - 1; i++)
    {//start looking + swapping through array
        big = bigFind(&scores, size, i);
        swap(scores[big].name, scores[i].name);
        swap(scores[big].pt, scores[i].pt);
    }//end looking/swapping
}//end

void displayData(Highscore scores[], int size)
{//start
    cout << "Top scores" << endl;
    for (int i = 0; i < size; i++)
    {//start displaying sorted names/scores
        cout << scores[i].name << ": " << scores[i].pt << endl;
    }//end displaying scores
}//end

 //helper function

int bigFind(Highscore scores[], int size, int inital)
{//start
    int start = inital;
    for (int i = start + 1; i < size; i++)
    {//look through array
        if (scores[i].pt > scores[start].pt)
        {
            start = i;
        }
    }//end look 
    return start;
}//end

