#include <iostream>
using namespace std;

void func(int arr[], int n)
{
    cout << "Array element are size: " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // static array allowcation
    // int arr[5] = {1, 2, 3, 4, 5};

    // dynamic array allowcation
    int n;
    cin >> n;
    int *arr = new int[n]; // each element would be 0 or garbage;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        arr[i] = data;
    }

    func(arr, n);
}