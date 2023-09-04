#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number" << endl;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Even: " << i << endl;
        }
    }
    return 0;
}