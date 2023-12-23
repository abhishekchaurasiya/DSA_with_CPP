#include <iostream>
using namespace std;

void printArray(int *arr, int size, int index)
{
    // base case
    if (index >= size)
    {
        return;
    }

    cout << arr[index] << " ";

    // recursive call
    printArray(arr, size, index + 1);

    // // decreasing order
    // printArray(arr, size, index + 1);
    // cout << arr[index] << " ";
}

bool searchInArray(int arr[], int size, int index, int target)
{
    // base case
    if (index >= size)
    {
        return false;
    }

    if (arr[index] == target)
    {
        return true;
    }
    bool answer = searchInArray(arr, size, index + 1, target);
    return answer;
}

void printHello(int count)
{
    if (count = 0)
    {
        break;
    }

    cout << "hello ji";

    printHello(count - 1);
}

int main()
{
    int arr[] = {10, 20, 50, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    int target = 50;

    // cout << "Target found or not: " << searchInArray(arr, size, index, target);

    // printArray(arr, size, index);
    int count = 0;
    printHello(count);
    return 0;
}