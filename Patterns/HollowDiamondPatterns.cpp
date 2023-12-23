#include <iostream>
using namespace std;

int main()
{
    /*

   *
  * *
 *   *
*     *
*     *
 *   *
  * *
   *

    */

    int number;
    cout << "Enter the number:-" << endl;
    cin >> number;
    int n = number / 2;

    // outer loop for hollow pyramid
    for (int row = 0; row < n; row++)
    {
        // inner loop for print stars and spaces
        // print spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        // print stars and space
        for (int col = 0; col < row + 1; col++)
        {
            // print stars
            if (col == 0 || col == row + 1 - 1)
            {
                cout << "* ";
            }
            // print spaces
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // outer loop for inverted hollow pyramid
    for (int row = 0; row < n; row++)
    {
        // inner loop for print stars and spaces
        // print spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // print stars and space
        int totalCol = n - row;
        for (int col = 0; col < totalCol; col++)
        {
            // print stars
            if (col == 0 || col == totalCol - 1)
            {
                cout << "* ";
            }
            // print spaces
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}