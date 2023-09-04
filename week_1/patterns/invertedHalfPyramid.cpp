#include <iostream>
using namespace std;

int main()
{
    /* Inverted Halfpyramid

        * * * * *
        * * * *
        * * *
        * *
        *

        Here int n = 5;
        1) find the number of rows => 5
        2) write down each rows:-
        Here follow the rules of (n-row) because every time decrease the value
        row0 => print 5 stars ==>> 5-0 => 5
        row1 => print 4 stars ==>> 5-1 => 4
        row2 => print 3 stars ==>> 4-1 => 3
        row3 => print 2 stars ==>> 3-1 => 2
        row4 => print 1 stars ==>> 2-1 => 1

    */

    int n;
    cout << "Enter the rows number:- " << endl;
    cin >> n;

    // // outer loop
    for (int row = 0; row < n; row++)
    {
        // inner loop
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    };
};