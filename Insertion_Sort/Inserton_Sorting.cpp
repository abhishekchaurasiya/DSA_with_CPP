#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    // i = 0 ko ignore karte hai
    for (int i = 1; i < n; i++)
    {
        // yaha par key store karne ka purpose hai ki
        // ham i =1 element lost hone wala tha
        int key = arr[i];
        int j = i - 1;
        while ((j >= 0) && (arr[j] > key))
        {
            arr[j + 1] = arr[j]; // yaha par every element ko aage ki side par shift karte rho
            j--;
        }
        arr[j + 1] = key; // yaha par insertion ho raha hai
    }
}

int main()
{
    vector<int> arr = {44, 33, 55, 22, 11};
    insertionSort(arr);

    print(arr);
}