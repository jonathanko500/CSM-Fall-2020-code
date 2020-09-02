#include <iostream>
using namespace std;

int main()
{//start of main
    drawHorizontalLine();
}//end main
void drawHorizontalLine()
{
    int count;
    for (count = 0; count < 6; count++) {
        cout << "X";
    }
    cout << endl;
}
