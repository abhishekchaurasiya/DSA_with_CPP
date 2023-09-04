#include <iostream>
using namespace std;

int main()
{

    /*
    Hollow rectangle
    * * * * *
    *       *
    *       *
    *       *
    * * * * *

formula:-
 1) find the number of rows:- 5
 2) Write down for each rows(means how many stars in a single row)
       like that===>>
       row0 ==> print 5 stars
       row1 ==> 1 star, 3 spaces, 1 star
       row2 ==> 1 star, 3 spaces, 1 star
       row3 ==> 1 star, 3 spaces, 1 star
       row4 ==> print 5 stars


    */
    int rows;
    cout << "Enter the rows number:- " << endl;
    cin >> rows;

    int cols;
    cout << "Enter the column number:- " << endl;
    cin >> cols;

    // outer loop
    for (int row = 0; row < rows; row++)
    {
        // inner loop
        for (int col = 0; col < cols; col++)
        {
            // get the last value like this(rows - 1)
             if (row == 0 || row == rows - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == cols - 1)
                { 
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}