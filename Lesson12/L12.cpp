#include <iostream>;
using namespace std;

int main()
{//start
    
     // 12.2.1 Declare a Pointer

    int* intptr;
    int* intptr1;

    // 12.2.2 The "Address Of" Operator + 12.4 assign pointer

    int i;//12.2
    intptr = &i;//12.2
    intptr1 = intptr;//12.4

    // 12.2.3 The "Dereference" or "Indirection" Operator

    *intptr = 47;                // indirect addressing
    // equivalent to: i = 47     // direct addressing
    cout << intptr << " " << i << " " << *intptr << " " << *intptr1 << endl;


    // 12.2.5 Pointers to Objects

    string* strptr1;
    string str1("hello");
    strptr1 = &str1;

    // cout << *strptr1.substr(2, 3) << endl;  won't work here 
    // because "." has higher precedence than "*"

    cout << (*strptr1).substr(2, 3) << endl;
    cout << strptr1->substr(2, 3) << endl;
    cout << endl;
    
}//end

