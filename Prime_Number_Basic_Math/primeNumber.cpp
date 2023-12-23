#include <iostream>
#include <vector>
using namespace std;


// square root approach for prime number and this is not good approach 
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    vector<int> n = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }

    return count;
}