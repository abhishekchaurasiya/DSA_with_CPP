#include <iostream>
using namespace std;

int findOddOccuringElement(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        // single case ke liye
        if (s == e)
            return s;

        // odd index ke liye
        if (mid & 1)
        {
            // here hamara element pichhale wale element se equal hai to
            if ((mid - 1 >= 0) && (arr[mid-1] == arr[mid]))
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        } // Even index ke case me
        else
        {
            if ((mid + 1 < n) && (arr[mid] == arr[mid + 1]))
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }

        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 10, 2, 2, 3, 3, 7, 5, 5, 6, 6, 7, 7};

    int n = sizeof(arr) / sizeof(arr[0]);

    int answerIndex = findOddOccuringElement(arr, n);

    // here get a odd occurance element
    cout << "Final ans is: " << arr[answerIndex] << endl;

    // here get a odd occurance element index
    cout << "Odd occurance index: " << answerIndex << endl;

    return 0;
}