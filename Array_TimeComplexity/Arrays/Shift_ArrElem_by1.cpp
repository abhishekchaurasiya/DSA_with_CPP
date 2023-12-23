#include <iostream>
using namespace std;

// right shifting
void shiftArrElementBy1(int arr[], int size)
{
    // Step 1: store temp value
    int temp = arr[size - 1];

    // Step 2:
    // shift arr[i] = arr[i-1]
    for (int i = size - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Step 3: copy temp into 0th index
    arr[0] = temp;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    shiftArrElementBy1(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}