#include <iostream>
using namespace std;

int main()
{
    int hours;
    int paycheck;
    int payRate;

    cout << "Enter hours worked (neg numb to quit): ";
    cin >> hours;
    while (hours >= 0) {
        cout << "Enter rate of pay: ";
        cin >> payRate;

        if (hours <= 40) {
            paycheck = hours * payRate;
        }
        else {
            paycheck = 40 * payRate + (hours - 40) * payRate * 1.5;
        }

        cout << "The amount of the paycheck is " << paycheck
            << " dollars." << endl;

        cout << "Enter hours worked (negative number to quit): ";
        cin >> hours;

    }
}