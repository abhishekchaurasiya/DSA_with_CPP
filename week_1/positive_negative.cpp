#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "You can check postive, negative and zero value." << endl;
    cin >> number;

    if (number > 0)
    {
        cout << "It's a positive number" << endl;
    }
    else if (number < 0)
    {
        cout << "It's a negative number" << endl;
    }
    else
    {
        cout << "It's a zero number" << endl;
    }

    return 0;
}