#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            // right side me send karna hai
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            // left me send karna hai
            end = mid - 1;
        }
        // yaha par always mistake kar dete hai
        // because yaha par mid ko update karna bhi padega
        mid = (start + end) / 2;
    }
    // worst case
    // means yaha par kuchh nahi mila to
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = 9;
    int target = 900;

    int arrIndex = binarySearch(arr, n, target);

    if (arrIndex == -1)
    {
        cout << "Not found the array element" << arrIndex << endl;
    }
    else
    {
        cout << "Found the array element: " << arrIndex << endl;
    }

    return 0;
}