#include <iostream>
using namespace std;

int main()
{
    /*
    Hollow Inverted Pyramid
        * * * * *
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
        int totalCount = n - row;
        for (int col = 0; col < totalCount; col++)
        {
            if (row == 0 || row == n - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == totalCount - 1)
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