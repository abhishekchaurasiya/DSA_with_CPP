#include <iostream>
using namespace std;

int main()
{
    /*
Diamond Pyramid
    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *

    */
    int number;
    cout << "Enter the number:- " << endl;
    cin >> number;
    int n = number / 2;

    // full pyramid
    // outer loop
    for (int row = 0; row < n; row++)
    {
        // inner loop print spaces and stars
        // print spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        };
        // print stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // inverted full pyramid
    // outer loop
    for (int row = 0; row < n; row++)
    {
        // inner loop print spaces and stars
        // print spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // print stars
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
};