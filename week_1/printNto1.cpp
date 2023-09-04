#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the value:- " << endl;
    cin >> number;
    for (int i = number; i > 0; i--)
    {
        cout << i << endl;
    }
    return 0;
}