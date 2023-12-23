#include <iostream>
#include <vector>
using namespace std;

void shiftNegativeOneSide(vector<int> &arr)
{
    // 1st way
    // j represent karta hai ki negative element ko store karna hai
    int pointer = 0;
    for (int index = 0; index < arr.size(); ++index)
    // index ==> entire array ko traverse karta hai
    {
        if (arr[index] < 0)
        {
            swap(arr[index], arr[pointer]);
            pointer++;
        }
    }

    // 2nd way
    // j represent karta hai ki negative element ko store karna hai
    // here I have use two pointer left and right
    // es type se pointer ka use karne par time complexity extra ho jayegi
    // int j = arr.size() - 1;
    // int i = 0;
    // for (int index = 0; index < arr.size(); ++index)
    // // index ==> entire array ko traverse karta hai
    // {
    //     if (arr[index] < 0)
    //     {
    //         swap(arr[index], arr[j]);
    //         i++;
    //         j--;
    //     }
    // }
}

int main()
{
    vector<int> arr = {-23, 11, 32, -7, -12, 23, - 10, -11, -40, -60, 0};
    int size = arr.size();

    shiftNegativeOneSide(arr);

    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}