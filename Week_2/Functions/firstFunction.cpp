#include <iostream>
using namespace std;

void printName()
{
    cout << "Hello c++, you are awesome!" << endl;
    return;
}

void greeting()
{
    cout << "Hello c++, you are awesome!" << endl;
}

int addNumbers(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}

void printC()
{
    cout << "hello function C" << endl;
};

void printB()
{
    cout << "hello function B" << endl;
    printC();
};

void printA()
{
    printB();
    printC();
};

int main()
{
    // cout << "Okay" << endl;
    // printName();
    // int result = addNumbers(2, 3, 4);
    // cout << result << endl;

    // int num1 = 20;
    // int num2 = 30;
    // swap(num1, num2);

    // cout << num1 << endl;
    // cout << num2 << endl;

    // string str = "Hello my dear c++";
    // char oneChar = "a";
    // cout << oneChar << endl;
    // cout << str << endl;

    // printA();

    int start = 0;
    int i = 0;
    int end = n - 1;
    while (i != end)
    {
        if (arr[i] < 0)
        {
            i++;

            return 0;
        }
    }