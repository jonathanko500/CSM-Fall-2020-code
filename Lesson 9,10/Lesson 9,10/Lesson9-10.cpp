#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
/*lesson 9 selection sort ex
* const int ARRAY_SIZE = 1000;

void printList(const int list[],int numItems);
int indexOfSmallest(const int list[], int startingIndex, int numItems);
void sort(int list[], int numItems);
void readNumbers(int list[], int& numItems);

int main()
{
    int list[ARRAY_SIZE];
    int numItems;


    readNumbers(list, numItems);
    sort(list, numItems);
    cout << "The sorted list: "
        << endl;
    printList(list, numItems);
}



void readNumbers(int list[], int& numItems)
{
    int number;
    int count = 0; // the number of numbers that have been entered

    cout << "Enter a number (negative number to quit): ";
    cin >> number;
    while (number >= 0 && count < ARRAY_SIZE) {
        list[count] = number;
        count++;
        if (count < ARRAY_SIZE) {
            cout << "Enter a number (negative number to quit): ";
            cin >> number;
        }
        else {
            cout << "The array is now full." << endl;
        }
    }
    numItems = count;
}


void sort(int list[], int numItems)
{
    for (int count = 0; count < numItems - 1; count++) {
        swap(list[indexOfSmallest(list, count, numItems)],
            list[count]);
    }

}


int indexOfSmallest(const int list[], int startingIndex, int numItems)
{
    int targetIndex = startingIndex;

    for (int count = startingIndex + 1; count < numItems; count++) {
        if (list[count] < list[targetIndex]) {
            targetIndex = count;
        }
    }

    return targetIndex;
}

void printList(const int list[],int numItems)
{
    for (int count = 0; count < numItems; count++) {
        cout << list[count] << " ";
    }
}
*/

const int NUM_PRECINCTS = 4;
const int NUM_CANDIDATES = 4;
const int COLUMN_WIDTH = 10;

void readVotes(int votes[][NUM_CANDIDATES]);
void initVotes(int votes[][NUM_CANDIDATES]);
void readNames(string names[]);
void printPrecinctTotals(const int votes[][NUM_CANDIDATES],
    ofstream& outfile);
void printCandidateTotals(const int votes[][NUM_CANDIDATES],
    const string names[],
    ofstream& outfile);
void printTable(const int votes[][NUM_CANDIDATES],
    const string names[],
    ofstream& outfile);
void printReport(const string names[], const int votes[][NUM_CANDIDATES]);




int main()
{
    int votes[NUM_PRECINCTS][NUM_CANDIDATES];
    string names[NUM_CANDIDATES];

    readNames(names);
    readVotes(votes);
    printReport(names, votes);
}




void readNames(string names[])
{
    for (int count = 0; count < NUM_CANDIDATES; count++) {
        cout << "Enter name of candidate #" << count + 1 << ": ";
        getline(cin, names[count]);
    }
}




void readVotes(int votes[][NUM_CANDIDATES])
{
    ifstream infile("votes.dat");
    int precinct, candidate;

    initVotes(votes);
    infile >> precinct >> candidate;
    while (infile) {
        votes[precinct - 1][candidate - 1]++;
        infile >> precinct >> candidate;
    }
    infile.close();
}




void initVotes(int votes[][NUM_CANDIDATES])
{

    for (int row = 0; row < NUM_PRECINCTS; row++) {
        for (int col = 0; col < NUM_CANDIDATES; col++) {
            votes[row][col] = 0;
        }
    }
}




void printReport(const string names[], const int votes[][NUM_CANDIDATES])
{
    ofstream outfile("votes.out");
    printTable(votes, names, outfile);
    printCandidateTotals(votes, names, outfile);
    printPrecinctTotals(votes, outfile);
}




void printTable(const int votes[][NUM_CANDIDATES],
    const string names[],
    ofstream& outfile)


{
    outfile << setw(11) << "";
    for (int count = 0; count < NUM_CANDIDATES; count++) {
        outfile << setw(COLUMN_WIDTH) << names[count].substr(0, COLUMN_WIDTH - 1);
    }
    outfile << endl;



    for (int row = 0; row < NUM_PRECINCTS; row++) {
        outfile << "Precinct " << setw(2) << row + 1;
        for (int col = 0; col < NUM_CANDIDATES; col++) {
            outfile << setw(COLUMN_WIDTH) << votes[row][col];
        }
        outfile << endl;
    }
    outfile << endl;
}




void printCandidateTotals(const int votes[][NUM_CANDIDATES],
    const string names[],
    ofstream& outfile)

{
    int sum;

    for (int col = 0; col < NUM_CANDIDATES; col++) {
        sum = 0;
        for (int row = 0; row < NUM_PRECINCTS; row++) {
            sum += votes[row][col];
            //sum = sum + votes[row][col];
        }

        outfile << "Total votes for " << setw(10)
            << names[col].substr(0, 9) << ": " << sum << endl;

    }
    outfile << endl;
}




void printPrecinctTotals(const int votes[][NUM_CANDIDATES],
    ofstream& outfile)

{
    int sum;

    for (int row = 0; row < NUM_PRECINCTS; row++) {
        sum = 0;
        for (int col = 0; col < NUM_CANDIDATES; col++) {
            sum += votes[row][col];
            //sum = sum + votes[row][col];
        }

        outfile << "Total votes for precinct " << row + 1
            << ": " << sum << endl;

    }
    outfile << endl;
}