#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// sorting with the incresing order
void bubbleSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i)
    {
        // here (n - i - 1) 5 - i - 1 ==> 4 - i
        for (int j = 0; j < n - i - 1; ++j)
        {
            // esme first element greaterthan hoga next element ke
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// sorting with the decresing order
// void bubbleSort(vector<int> &arr)
// {
//     int n = arr.size();

//     for (int i = 0; i < n - 1; ++i)
//     {
//         for (int j = 0; j < n - i - 1; ++j)
//         {
//             // esme first element lessthan hoga next element ke
//             if (arr[j] < arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

int main()
{
    // vector<int> arr = {55, 32, 45, 52, 43, 64, 65, 12, 32, 1, 2};
    vector<int> arr = {44, 33, 11, 55, 66, 32};
    bubbleSort(arr);

    printArr(arr);

    return 0;
}