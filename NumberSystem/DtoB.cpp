#include <iostream>
#include <cmath>
using namespace std;

int DecimalToBinaryNumber1(int n)
{
    // Division Method
    int binaryNumber = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryNumber = bit * pow(10, i++) + binaryNumber; // 0 * 10 + 0 = 0
        n = n / 2;
    }
    return binaryNumber;
}

int DecimalToBinaryNumber2(int n)
{
    // Bitwise Method
    int binaryNumber = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1); 
        binaryNumber = bit * pow(10, i++) + binaryNumber; // 0 * 10 + 0 = 0
        n = n >> 1; // here right shift by 1
    }
    return binaryNumber;
}

int main()
{
    int n;
    cin >> n;
    int binaryNumber = DecimalToBinaryNumber2(n);
    cout << "binaryNumber: " << binaryNumber << endl;
}