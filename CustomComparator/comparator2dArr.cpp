#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVV(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        vector<int> temp = arr[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    }
    cout << endl;
}

// comparator always returns the bool value (true/false)
bool comparatorIndex(vector<int> &a, vector<int> &b)
{
    // return a[1] < b[1]; // increasing order sorting
    return a[1] > b[1]; // decreasing order sorting
}

int main()
{
    // vector of vector means 2d array
    vector<vector<int>> arr = {{0, 12}, {1, 32}, {2, 4}, {0, 54}, {3, 15}};

    // print vector before sorting
    printVV(arr);

    // sorting the vector of 1st index
    // using the custom comparator
    sort(arr.begin(), arr.end(), comparatorIndex);

    // print vector after sorting
    printVV(arr);


    // vector<vector<int>> arr;

    // how to get input by user
    // int n;
    // cout << "Enter the size: " << endl;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int a, b;
    //     vector<int> temp;
    //     cin >> a >> b;
    //     temp.push_back(a);
    //     temp.push_back(b);
    //     arr.push_back(temp);
    // }

    // cout << "print array: " << endl;

    return 0;
}