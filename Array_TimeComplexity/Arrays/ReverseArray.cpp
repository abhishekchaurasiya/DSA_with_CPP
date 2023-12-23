#include <iostream>
using namespace std;

// This is the first way
void reverseAnArray(int arr[], int size)
{
    int leftPointer = 0;
    int rightPointer = size - 1; // last index or nth of index

    while (leftPointer <= rightPointer)
    {
        // here using two pointer technique or swapping
        swap(arr[leftPointer], arr[rightPointer]);
        leftPointer++;
        rightPointer--;
    };

    // Printing the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// second way
void reverseAnArraySecondWay(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {3, 4, 9, 10, 20, 23, 27, 30, 40, 47, 49, 50, 60, 70,90};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;

    reverseAnArray(arr, size);
    cout << endl;
    reverseAnArraySecondWay(arr, size);

    return 0;
}