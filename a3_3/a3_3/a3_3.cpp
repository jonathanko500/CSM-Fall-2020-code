
/*
* Jonathan Ko
* 9/3/2020
* Cis 278
* Assignment 3
*
*
* This program is called Guess the Number
*
* The complier is tasked to guess the number that the user is thinking of.
*
* First the compiler asks the user is ready to play.
* User says yes (y) then the game will continue
* user says no (n) the complier will stop asking to play.
*
* When the game starts, the user is asked to think of a number.
* Then the compiler will randomly pick a number between 1 and 100.
* After displaying the randomly chosen number, the compiler ask whether the compiler is correct or needs to guess higher or lower.
*
* If the guess is correct then the compiler asks the user to play again.
*
* If the compiler needs to guess higher, then the range for the guess next will start from the midpoint between the highest and lowest possible point to the highest (100) point.
*
* If the compiler needs to guess lower, then the range for the next guess will start from the lowest point (0) to the midpoint of the lowest and highest possible point.
*
* The compiler will keep repeating the display of the randomly guessed number, asking the same question until the user says its correct, and asking if the user wants to continue to play.
*/

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;
const int allHigh = 100;
const int allLow = 1;

//functions
int getMidpoint(int low, int high)
{
    int mid = (low + high) / 2;
    return mid;
}
void getUserResponseToGuess(int guess, char result)
{//start

}//end
void playOneGame()
{//start
    char range;//go higher, lower or stop
    int guess = (allHigh + allLow) / 2;//inital guess
    cout << "Think of a number between 1 and 100" << endl;
    do
    {//start loop
        cout << "My guess is " << guess;
        cout << ". Enter 'l' if your number is lower. Enter 'h' if your number is higher. Enter 'c' if it is correct: ";
        cin >> range;
        getUserResponseToGuess(guess, range);
    } while (range != 'c');//end loop
}//end
int main()
{//start main
	srand(static_cast<unsigned>(time(nullptr)));
    char response;

    cout << "Ready to play (y/n)? ";
    cin >> response;
    while (response == 'y')
    {//start loop
        playOneGame();
        cout << "Great! Do you want to play again (y/n)? ";
        cin >> response;
    }//end loop
}//end main


