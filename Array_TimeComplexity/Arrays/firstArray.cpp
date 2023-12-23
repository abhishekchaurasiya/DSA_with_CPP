#include <iostream>
#include <limits.h>
using namespace std;

void solve(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
};

// linear serach means koyi bhi target find out karna
// present ==> true ==> true == 1
// absent ==> false ===> false == 0

bool linearSearch(int arr[], int size, int target)
{
    // here is no need flag options
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            // found means if target found ho jata hai to yahi se return ho jayega loop ke out side me jayega hi nahi
            return true;
        }
    }
    // not found
    return false;
}

int findMinimumInArray(int arr[], int size)
{
    int minAnswer = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minAnswer) // here currenct value arr[i] agar minAnswer se small hai to use updated kar do
        {
            minAnswer = arr[i];
        }
    }
    return minAnswer;
};

int findMaximumInArray(int arr[], int size)
{
    int maxAnswer = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxAnswer) // here currenct value arr[i] agar maxAnswer se large hai to use updated kar do
        {
            maxAnswer = arr[i];
        }
    }
    return maxAnswer;
};

void reverseAnArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // 1st way reverse an array
    // for (int i = size - 1; i >=0; i--)
    // {
    //     cout << arr[i]<< " ";
    // }
}

void extremeAnArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << endl;
        }
        else
        {
            cout << arr[left] << endl;
            cout << arr[right] << endl;
        }
        left++;
        right--;
    };
}

int main()
{
    // array creation
    // int arr[10];
    // char ch[102];
    // bool flags[223];
    // long num[900];
    // short snum[1000];
    // cout << "Array created successfully:- " << &ch << endl;
    // cout << "Array created successfully:- " << ch << endl;

    // int a = 5;
    // cout << "Size of int:- " << sizeof(a) << endl;

    // int arr[127];
    // cout<<"size of array:- "<< sizeof(arr)<<endl;

    // Array initialization

    // 1st question
    // create 10 size of an array
    // input take an input
    // double up each value of an array

    // // create 10 size of an array
    // int arr[10];
    // int n = 10;

    // // taking input
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Printing after taking input " << endl;

    // // printing after input
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // // here double
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = 2 * arr[i];
    // }
    // cout << endl;
    // cout << "Printing after taking double " << endl;
    // // printing after double
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //  2nd question
    // create 5 size of an array
    // input take an input
    // total sum print

    // int array[5];
    // int n = 5;
    // int sum = 0;

    // cout << "Given the input" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array[i];
    // }
    // cout << endl;

    // cout << "Print given input an array" << endl;
    // // printing array after taking input

    // for (int i = 0; i < n; i++)
    // {
    //     cout << array[i] << " ";
    // }

    // cout << endl;
    // cout << "Print total sum of an array" << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     sum += array[i];
    // }
    // cout << "Printing sum value" << endl;
    // cout << sum << endl;

    // Linear search using function
    // int arr[5] = {2, 3, 5, 6, 4};
    // int size = 5;
    // int target = 98;

    // solve(arr, size);
    // cout << endl;
    // bool res = linearSearch(arr, size, target);
    // if (res == 1)
    // {
    //     cout << "Target founded" << endl;
    // }
    // else
    // {
    //     cout << "Target not founded" << endl;
    // }

    // // Count 0's and 1's in an array means (how many times of 0's and 1's present in an array)
    // int arr[] = {0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1};
    // int lenght = sizeof(arr) / sizeof(arr[0]);  // 60 bytes/ 4 bytes = 15;

    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(arr[0])<<endl;
    // cout << lenght << endl;

    // // int n = 16;
    // int zeroCount = 0;
    // int oneCount = 0;

    // for (int i = 0; i < lenght; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         zeroCount++;
    //     }
    //     if (arr[i] == 1)
    //     {
    //         oneCount++;
    //     }
    // }

    // cout << "Zero cout:- " << zeroCount << endl;
    // cout << "One count:- " << oneCount << endl;

    // Minimum number of an array
    // int arr[] = {10, 20, 30, 40, 50, 60,70,80};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // int minNumber = findMinimumInArray(arr, size);
    // cout << "Minimum number: " << minNumber << endl;

    // int maxNumber = findMaximumInArray(arr, size);
    // cout << "Maxmimum number: " << maxNumber << endl;

    // using predefined functions
    // int minAnswer = INT_MAX;
    // // int maxAnswer = INT_MIN;
    // for (int i = 0; i < length; i++)
    // {
    //     minAnswer = min(arr[i], minAnswer);
    // }

    // for (int i = 0; i < length; i++)
    // {
    //     minAnswer = max(arr[i], maxAnswer);
    // }
    // cout << minAnswer << endl;

    // reverse an array
    // reverseAnArray(arr, size);

    // extreme an array
    // extremeAnArray(arr, size);

    int left =0;
    int right = size = 





    return 0;
};