#include <iostream>
    using namespace std;

    int main()
    {
        int* intptr = new int;
        int arraySize;
    
        // new does 2 things: (1) allocate a variable of the 
        // specified type on the heap (2) return a pointer 
        // to that variable.  Put another way:  create a new    
        // variable on the heap and make intptr point to it.
    
        cout << "Enter the size of the array: ";
        cin >> arraySize;
        string* stringArray = new string[arraySize];
            
        *intptr = 392;
        
        stringArray[0] = "Nicole";
        stringArray[2] = "Ryan";
        
        cout << *intptr << " " 
             << *stringArray << " " 
             << stringArray[2] << endl;
    }