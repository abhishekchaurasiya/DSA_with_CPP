#include <iostream>
using namespace std;

int main()
{
    /*
    Half Pyramid
     *
     * *
     * * *
     * * * *
     * * * * *

     */
    
    int ROWS;
    cout << "Enter the rows number:- " << endl;
    cin >> ROWS;

    // outer loop
    for (int row = 0; row < ROWS; row++)
    {
        // inner loop
        for (int cols = 0; cols < row + 1; cols++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}