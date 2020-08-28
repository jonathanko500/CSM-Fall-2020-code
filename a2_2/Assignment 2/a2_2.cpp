#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

const string result1 = "Blackjack";
const string result2 = "Bust";

int main()
{//start main
    //variables
    int card1,card2,addCard,total;
    char response,again;
    //play game again
    do
    {//start game again loop
        //make and print first 2 random card
        card1 = rand() % 10 + 1;//RNG between 1 - 10
        card2 = rand() % 10 + 1;//RNG between 1 - 10
        cout << "First cards: " << card1 << " , " << card2 << endl;
        //calc and print total of first 2 cards
        total = card1 + card2;
        cout << "Total: " << total << endl;
        //make loop to ask user to add cards or not
        do
        {//start loop
            cout << "Do you want to add another? (Y/N): ";
            cin >> response;
            if (response == 'Y')
            {
                //make and print new random card
                addCard = rand() % 10 + 1;//RNG between 1 - 10
                cout << "Added card: " << addCard << endl;
                //calc and print new total
                total = total + addCard;
                cout << "New total: " << total << endl;
                //stop adding cards if total is 21+
                if (total >= 21)
                {
                    response = 'N';
                }
            }
        } while (response == 'Y');//end loop
         //response after calc and print of new total
        if (total > 21)
        {//start total check
            //if total is greter then 21
            cout << "You finished with a " << result2 << endl;
        }
        else
        {
            if (total < 21)//if total is less then 21
                cout << "You finihsed with " << total << endl;
            else
            {//if total is black jack
                cout << "You finished with a " << result1 << endl;
            }
        }//end total check
        //ask to play again
        cout << "Play again? (Y/N): ";
        cin >> again;
        cout << "********************************" << endl;
    } while (again == 'Y');//end game again loop
 }//end main
    //output
    /*
    First cards: 2 , 8
    Total: 10
    Do you want to add another? (Y/N): Y
    Added card: 5
    New total: 15
    Do you want to add another? (Y/N): Y
    Added card: 1
    New total: 16
    Do you want to add another? (Y/N): Y
    Added card: 10
    New total: 26
    You finished with a Bust
    Play again? (Y/N): Y
    ********************************
    First cards: 5 , 9
    Total: 14
    Do you want to add another? (Y/N): Y
    Added card: 9
    New total: 23
    You finished with a Bust
    Play again? (Y/N): Y
    ********************************
    First cards: 3 , 5
    Total: 8
    Do you want to add another? (Y/N): Y
    Added card: 6
    New total: 14
    Do you want to add another? (Y/N): Y
    Added card: 6
    New total: 20
    Do you want to add another? (Y/N): N
    You finihsed with 20
    Play again? (Y/N): Y
    ********************************
    First cards: 2 , 8
    Total: 10
    Do you want to add another? (Y/N): Y
    Added card: 2
    New total: 12
    Do you want to add another? (Y/N): Y
    Added card: 2
    New total: 14
    Do you want to add another? (Y/N): Y
    Added card: 6
    New total: 20
    Do you want to add another? (Y/N): N
    You finihsed with 20
    Play again? (Y/N): Y
    ********************************
    First cards: 3 , 8
    Total: 11
    Do you want to add another? (Y/N): Y
    Added card: 7
    New total: 18
    Do you want to add another? (Y/N): Y
    Added card: 2
    New total: 20
    Do you want to add another? (Y/N): Y
    Added card: 5
    New total: 25
    You finished with a Bust
    Play again? (Y/N): Y
    ********************************
    First cards: 3 , 4
    Total: 7
    Do you want to add another? (Y/N): Y
    Added card: 3
    New total: 10
    Do you want to add another? (Y/N): Y
    Added card: 3
    New total: 13
    Do you want to add another? (Y/N): Y
    Added card: 2
    New total: 15
    Do you want to add another? (Y/N): Y
    Added card: 7
    New total: 22
    You finished with a Bust
    Play again? (Y/N): Y
    ********************************
    First cards: 9 , 6
    Total: 15
    Do you want to add another? (Y/N): Y
    Added card: 8
    New total: 23
    You finished with a Bust
    Play again? (Y/N): Y
    ********************************
    First cards: 7 , 2
    Total: 9
    Do you want to add another? (Y/N): Y
    Added card: 9
    New total: 18
    Do you want to add another? (Y/N): Y
    Added card: 10
    New total: 28
    You finished with a Bust
    Play again? (Y/N): Y
    ********************************
    First cards: 3 , 8
    Total: 11
    Do you want to add another? (Y/N): Y
    Added card: 10
    New total: 21
    You finished with a Blackjack
    Play again? (Y/N): N
    ********************************
    */

