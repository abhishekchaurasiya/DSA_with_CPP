#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the value:- " << endl;
    cin >> number;
    for (size_t i = 1; i <= number; i++)
    {
        cout << i << endl;
    }
    return 0;
}