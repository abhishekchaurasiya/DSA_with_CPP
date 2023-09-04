#include <iostream>
using namespace std;

int main()
{
    /*
        *****
        *****
        *****
        *****
        *****

    How to approach for create square pattern
    A) Find the number of rows ==> 5
    B) Write down for each rows(means how many stars in a single row)
       like that===>>
       row0 ==> 4
       row1 ==> 4
       row2 ==> 4
       row3 ==> 4
       row4 ==> 4
    */

    int rows;
    cout << "Enter number of rows!" << endl;
    cin >> rows;

    int columns;
    cout << "Enter number of columns!" << endl;
    cin >> columns;

// outer lopp
    for (int row = 0; row < rows; row++)
    {
        // inner loop and prints many number of stars
        for (int col = 0; col < columns; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // int rows;
    // cout << "Enter number & get a square patterns!" << endl;
    // cin >> rows;

    // for (int row = 0; row < rows; row++)
    // {
    //     for (int col = 0; col < rows; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    return 0;
}