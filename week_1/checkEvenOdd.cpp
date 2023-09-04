#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number:- " << endl;
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "This is even number:- " << number << endl;
    }
    else
    {
        cout << "This is odd number:- " << number << endl;
    }
    return 0;
}