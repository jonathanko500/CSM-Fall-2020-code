#include <iostream>
#include <string>
using namespace std;

void init(int* x);

int main()
{

    // 12.2.1 Declare a Pointer

    int* intptr;
    int* intptr1;

    // 12.2.2 The "Address of" Operator

    int i;
    intptr = &i;

    // 12.2.3 The "Dereference" or "Indirection" Operator

    *intptr = 47;                // indirect addressing
    // equivalent to: i = 47     // direct addressing
    cout << intptr << " " << i << " " << *intptr << endl;

    // 12.2.4 Assignment of Pointers

    // The following statement should be pronounced "make
    // intptr1 point to whatever intptr is pointing to"

    intptr1 = intptr;
    cout << intptr1 << " " << i << " " << *intptr1 << endl;

    // 12.2.5 Pointers to Objects

    string* strptr1;
    string str1("hello");
    strptr1 = &str1;

    // cout << *strptr1.substr(2, 3) << endl;  won't work here 
    // because "." has higher precedence than "*"

    cout << (*strptr1).substr(2, 3) << endl;
    cout << strptr1->substr(2, 3) << endl;
    cout << endl;
    
    // 12.2.6 Arrays of Pointers

    string* strptr2;
    string* strptr3;
    string str2("there");
    string str3("penelope");
    strptr2 = &str2;
    strptr3 = &str3;

    string* array[10] = { strptr1, strptr2, strptr3 };

    *array[0] = *array[1] + *array[2];
    cout << *array[0] << " " << *array[1] << " " << *array[2] << endl;

    // 12.2.7 nullptr

    array[0] = nullptr;

    // 12.2.8 Array Name Without [ ] Is a Pointer Constant

    int array2[10];
    int* ptr;

    ptr = array2;    // equivalent to ptr = &array2[0];

    init(ptr);       // equivalent to init(array2);
    for (int i = 0; i < 10; i++) {
        cout << array2[i] << " ";        // equivalent to ptr[i]
    }
    cout << endl;

    // can't say "array2 = ptr;" because array2 is a constant
}



void init(int* x)        // equivalent to init(int x[])
{
    for (int i = 0; i < 10; i++) {
        x[i] = i;
    }
}