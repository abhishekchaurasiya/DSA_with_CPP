#include <iostream>
using namespace std;

int main()
{
    // float a, b;
    // cout << "Enter two numbers: " << endl;
    // cin >> a >> b;
    // int op;
    // cout << "What operation you wan to do? " << endl;
    // cin >> op;

    // float ans = 0;

    // if (op == 0)
    // {
    //     ans = a + b;
    // }
    // else if (op == 1)
    // {
    //     ans = a - b;
    // }
    // else if (op == 2)
    // {
    //     ans = a * b;
    // }
    // else if (op == 3)
    // {
    //     ans = a / b;
    // }
    // else
    // {
    //     cout << "Invalid operations" << endl;
    //     return 0;
    // }
    // cout << "Your answer is :- " << ans << endl;

    // Switch case and this is an alternative of if else statement

    float a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    int op;
    cout << "What operation you wan to do? " << endl;
    cin >> op;

    float ans = 0;

    switch (op)
    {
    case 0:
        cout << "add case" << endl;
        ans = a + b;
        break;
    case 1:
        cout << "sub case" << endl;
        ans = a - b;
        break;
    case 2:
        cout << "mul case" << endl;
        ans = a * b;
        break;
    case 3:
        cout << "div case" << endl;
        ans = a / b;
        break;
    default:
        cout << "Invalid operations" << endl;
        return 0;
    }

    cout << "Your answer is :- " << ans << endl;

    return 0;
}