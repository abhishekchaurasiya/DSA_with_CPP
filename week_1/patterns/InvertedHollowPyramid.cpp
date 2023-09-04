#include <iostream>
using namespace std;

int main()
{

    /*
    Interverd Hollow pyramid
*       *
 *     *
  *   *
   * *
    *

 */

    int n;
    cout << "Enter the number:- " << endl;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // inner loop
        //  print spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // print stars
        int totalColumns = n - row;
        for (int col = 0; col < totalColumns; col++)
        // if first and last columns print star
        {
            if (col == 0 || col == totalColumns - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}