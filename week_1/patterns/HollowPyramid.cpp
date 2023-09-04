#include <iostream>
using namespace std;

int main()
{
    /*
   Hollow Pymid
      *
     * *
    *   *
   *     *
  *       *

    */

   
    int n;
    cout << "Enter the number:-" << endl;
    cin >> n;

    // outer loop print all rows
    for (int row = 0; row < n; row++)
    {
        // inner loop will be print spaces and stars
        // print spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        };
        // print stars
        for (int col = 0; col < row + 1; col++)
        {
            // print stars first and last column
            if (col == 0 || col == row + 1 - 1)
            {
                cout << "* ";
            }
            else
            {
                // for every coloumn between first and last column, print spaces
                cout << "  ";
            }
        }
        cout << endl;
    }
}