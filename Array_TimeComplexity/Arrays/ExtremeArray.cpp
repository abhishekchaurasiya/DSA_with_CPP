#include <iostream>
using namespace std;

void extremAnArray(int arr[], int size)
{
    int leftPointer = 0;
    int rightPointer = size - 1;

    while (leftPointer <= rightPointer)
    {
        // cout << arr[leftPointer] << " " << arr[rightPointer] << " ";
        if (leftPointer == rightPointer)
        {
            cout << arr[leftPointer];
        }
        else
        {
            cout << arr[leftPointer] << endl;
            cout << arr[rightPointer] << endl;
        }
        leftPointer++;
        rightPointer--;
    }
}

int main()
{
    // Extreme an array
    // input arr value = {10,20,30,40,50,65,75,82};
    // output arr value = {82,20,30,40,50,65,75,10};

    // Eska means hai ki left ki value right me and right ki value left me add ho jaye

    int arr[] = {10, 20, 30, 40, 50, 65, 75, 82, 90, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "This is size of an array " << size << endl;

    extremAnArray(arr, size);
    cout << endl;

    return 0;
};