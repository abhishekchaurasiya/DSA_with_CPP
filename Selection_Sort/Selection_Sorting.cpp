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

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    // iterate the zero 0 to n-1
    for (int i = 0; i < n - 1; ++i)
    {
        // find the minIndex
        // let's ith index is a smallest element
        int min_index = i;
        for (int j = i + 1; j < n; ++j)
        {
            // if first element se min_index smallest hai to wahi  min_index hai
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // swap ith and min_index element
        swap(arr[i], arr[min_index]);
    }
}


int main()
{
    vector<int> arr = {44, 33, 58, 66};

    selectionSort(arr);

    print(arr);

    return 0;
}