#include <iostream>
using namespace std;

int main()
{
    // AND & bitwise operator
    // int num1 = 5;
    // int num2 = 10;

    // int result = num1 & num2;

    // cout << result << endl; // 0

    // // OR (|) bitwise operator
    // int num1 = 5;
    // int num2 = 10;

    // int result = num1 | num2; // 15
    // cout << result << endl;

    // int num1 = 5;
    // int num2 = 10;

    // int result = (num1) ~ (num2);
    // cout << result << endl;

    // bool num1 = 8;
    // cout << ~num1 << endl;
    // cout << (~num1) << endl;
    // cout << ~(num1) << endl;

    // int a = 2;
    // int b = 13;
    // int result = a ^ b;
    // cout << result << endl;

    // int a = 5;
    // int b = -5;
    // int result = a ^ b;
    // cout << result << endl;

    // Left shift operator
    // int num = 5;
    // int res = num << 3;
    // cout << res << endl;

    // int ac = 7;
    // cout << (ac << 5) << endl;

    // Right shift this is signed integer number because integer by defualt signed hota hai
    // int n = -6;
    // int ans = (n >> 1);
    // cout << ans << endl;

    // Right shift this is unsigned integer number me yah code break ho jata hai because unsigned number me compiler right shift ko handle nahi kar pata hai

    // unsigned int number = -6;
    // int res = (number >> 1);
    // cout << res << endl;

    // Pre / Post inc/dec
    int a = 10;
    // cout << ++a << endl;
    // int res = ++a;
    // cout << res << endl;
    // cout << a++ << endl;
    // cout << a++ << endl;
    // cout << a - 2 << endl;
    // cout << a + 2 << endl;

    // cout << (a--) * 10 << endl; // 50
    // cout << (--a) * 10 << endl; // 30
    // cout << (++a) * 10 << endl; // 40
    // cout << (a++) * 10 << endl; // 40
    // cout << (a++) * 10 << endl; // 50
    // cout << a;

    // Home work why this is print
    // cout << (++a) * (a++) << endl; // 11 * 11 + 11 = 132
    // cout << (a++) * (++a) << endl; // 10 * 11 + 1 = 120
    // cout << (--a) * (a++) << endl;

    // Break and Continue

    // Break
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            cout << i << endl;
            break;
        }
    }
    cout << "Continue: " << endl;
    // Continue
    for (int i = 0; i < 5; i++)
    {
        // cout << i << endl;
        cout << "Hello jee" << endl;
        continue;
        cout << "Ha jee" << endl;
    }

    

    return 0;
}