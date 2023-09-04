#include <iostream>
using namespace std;

int main()
{
    // int balance;
    // cout << "How much balance you have? " << endl;
    // cin >> balance;
    // if (balance >= 10)
    // {
    //     cout << "You can buy maggie." << endl;
    // }
    // else
    // {
    //     cout << "You can not buy maggie." << endl;
    // };

    int sides;
    // cout << "How much does it have? " << endl;
    // cin >> sides;
    // if (sides == 3)
    // {
    //     cout << "This is triangle." << endl;
    // }
    // else if (sides == 4)
    // {
    //     cout << "This is Square." << endl;
    // }
    // else if (sides == 6)
    // {
    //     cout << "This is a Hexagon." << endl;
    // }
    // else
    // {
    //     cout << "I don't know, what is the sides?" << endl;
    // }

    int day_number;
    cout << "What is today of the day? " << endl;
    cin >> day_number;
    if (day_number == 1)
    {
        cout << "Today is monday." << endl;
    }
    else if (day_number == 2)
    {
        cout << "Today is tuesday." << endl;
    }
    else if (day_number == 3)
    {
        cout << "Today is wednesday." << endl;
    }
    else if (day_number == 4)
    {
        cout << "Today is thursdy." << endl;
    }
    else if (day_number == 5)
    {
        cout << "Today is friday." << endl;
    }
    else if (day_number == 6)
    {
        cout << "Today is saturday." << endl;
    }
    else if (day_number == 7)
    {
        cout << "Today is sunday." << endl;
    }
    else
    {
        cout << "Please enter the valid number?";
    }

    return 0;
}