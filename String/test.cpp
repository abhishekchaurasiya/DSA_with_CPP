#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    // check 1 is not a prime number
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
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
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (isPrime(arr[i]))
        {
            count++;
            // cout << arr[i] << " ";
        }
    }
    cout << count << endl;

    return 0;
}