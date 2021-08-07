//Name: Julia Yu
//Date: November 5, 2019
//Email: julia.yu83@myhunter.cuny.edu
//This program asks for rows and columns to print out a pattern of 0s and 1s

#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int i;
    int j;
    int printThing;
    cout << "Enter the rows: ";
    cin >> x;
    cout << "Enter the columns: ";
    cin >> y;
    for (i = 0; i < x; i++){
        for (j = 0; j < y; j++){
            printThing = ((i + j + 1) % 2);
            cout << printThing;
        }
        cout << "\n";
    }

    return 0;
}
