#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the number:- " << endl;
    // cin >> n;

    // for (int rows = 0; rows < n; rows++)
    // {

    //     for (int col = 0; col < n - rows; col++)
    //     {
    //         cout << col + 1 << " ";
    //     }
    //     cout << endl;
    // }

    int ROWS = 5;
    int COLS = 8;
    for (int rows = 0; rows < ROWS; rows++)
    {
        for (int col = 0; col < COLS; col++)
        {
            if (rows == 0 || rows == ROWS - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == COLS - 1)
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