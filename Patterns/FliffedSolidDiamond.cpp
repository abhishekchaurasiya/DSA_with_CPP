#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number:-" << endl;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // inverted half pyramid 1
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        // full pyramid
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << "  ";
        }
        // inverted half pyramid 2
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        // half pyramid
        // inverted full pyramid
        // half pyramid

        cout << endl;
    }
}