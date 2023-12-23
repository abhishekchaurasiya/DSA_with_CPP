#include <iostream>
using namespace std;

int main()
{
    /*
  Inverted full pyramid
    * * * * *
     * * * *
      * * *
       * *
        *

    */
    int n;
    cout << "Enter the number:- " << endl;
    cin >> n;

    // outer loop
    for (int row = 0; row < n; row++)
    {
        // inner loop print for spaces and stars
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
}