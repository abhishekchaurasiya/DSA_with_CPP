#include <iostream>
using namespace std;

void sortZeroOnes(int arr[], int size)
{
    // here counting zeros and ones
    int zeroCount = 0;
    int oneCount = 0;

    // Step A:- count zero and one
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }

    // Esay way using while loop
    //  Step B:- place all zeros first
    int index = 0;
    while (zeroCount--)
    {
        arr[index] = 0;
        index++;
    }

    // Step C:- place all ones last
    // one count length 4 hai to zero tak loop chale
    // means of (oneCount--) 4,3,2,1 and jaise hi zero (0) ke equal hota hai to loop ke exit ho jaye
    while (oneCount--)
    {
        arr[index] = 1;
        index++;
    }

    // // using for loop
    // // Step B:- place all zeros first
    // int i;
    // for (i = 0; i < zeroCount; i++)
    // {
    //     arr[i] = 0;
    // }

    // // Step C:- place all ones last
    // for (int j = i; j < size; j++)
    // {
    //     arr[j] = 1;
    // }
};

int main()
{
    int arr[] = {0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortZeroOnes(arr, size);
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}