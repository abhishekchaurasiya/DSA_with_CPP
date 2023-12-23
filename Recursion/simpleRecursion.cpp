#include <iostream>
using namespace std;

// print 1 to n
void print1toN(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }

    print1toN(n - 1);
    cout << n << " ";
}

// print n to 1
void printNto1(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }

    cout << n << " ";
    printNto1(n - 1);
}

// print 2 power of  2 ==> 4
int pow(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int ans = 2 * pow(n - 1);
    return ans;
}

// print sum
int sum(int n)
{
    if (n == 1)
        return 1;

    int ans = n + sum(n - 1);
    return ans;
}

// print fibonacci
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int ans = n * factorial(n - 1);
    return ans;
}

int main()
{
    int n = 8;
    // int res = pow(n);
    // cout << res << endl;

    // int s = sum(n);
    // cout << s << endl;

    int res = fibonacci(n);
    cout << res << " ";

    // int res = factorial(n);
    // cout << res << endl;

    // print1toN(n);
    // cout << endl;
    // printNto1(n);



    return 0;
}