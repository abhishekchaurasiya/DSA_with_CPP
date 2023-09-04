#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the value:- " << endl;
    cin >> number;

    // 1 to N
    // outer loop
    // for (int i = 1; i < number; i++)
    // {
    //     cout << "outer loop:- " << i << "<<<>>>>" << endl;
    //     // inner loop
    //     for (int j = 1; j < number; j++)
    //     {
    //         cout << "inner loop:- " << j << endl;
    //     }
    // }

    // N to 1 inside loop
    // outer loop
    for (int i = 1; i < number; i++)
    {
        cout << "outer loop:- " << i << "<<<>>>>" << endl;
        // inner loop
        for (int j = number; j > 0; j--)
        {
            cout << "inner loop:- " << j << endl;
        }
    }

    return 0;
}