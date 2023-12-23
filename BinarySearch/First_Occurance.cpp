#include <iostream>
using namespace std;

// Eski time complexity O(logn) hogi
int findFirstOccuranceNumber(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    // 1st way
    // int mid = (s + e) / 2;  // es type se karne par integer ki value of sum ko overflow kar kar skta hai

    // 2nd way
    // int mid = s / 2 + e / 2;

    // 3rd way ===> yah integer ko overflow nahi kar sakta hai
    int mid = s + (e - s) / 2;

    int ans = -1; // means of (-1) ki minus one ka koi index hota hi nahi hai

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // store the answer element
            ans = mid;
            // left me send karo
            e = mid - 1;
        }
        else if (target > arr[mid])
        {
            // right me send kar do
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            // left me chale jao
            e = mid - 1;
        }
        // yaha par ham mistake karte hai
        // because hame mid ko update karna hota hai
        mid = (s + e) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 30, 30, 30, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int arrIndex = findFirstOccuranceNumber(arr, n, target);

    if (arrIndex == -1)
    {
        cout << "Not found the array element: " << arrIndex << endl;
    }
    else
    {
        cout << "Found the array element: " << arrIndex << endl;
    }

    return 0;
}