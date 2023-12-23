#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void print(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// custom comparator ka always return type bool datatype hota hai (type / false)
bool myComparator(int &a, int &b)
{
    // return a < b;  // increasing order sorting
    return a > b; // decreasing order sorting
}

int main()
{

    // This type of sort() function use with statice of an array
    // int arr[] = {23, 43, 2, 341, 35, 3, 6};
    // int n_size = sizeof(arr) / sizeof(arr[0]);

    // sort(arr, arr + n_size);

    vector<int> arr = {23, 43, 2, 341, 35, 3, 6};
    int n = arr.size();

    // How to use sort() stl fuction
    // This type of sort() function use with vector of an array
    // Increasing order
    // sort(arr.begin(), arr.end());

    // Decreasing order
    // yaha par custom comparator ka use kar sakte hai
    sort(arr.begin(), arr.end(), myComparator);

    print(arr);

    return 0;
}
