#include <iostream>
using namespace std;

int findMissingArrayElement(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int answer = -1;

    while (start <= end)
    {
        // yaha par different get karna hai
        // difference ko calculate karna hai
        int diff = arr[mid] - mid; // array element - mid value
        if (diff == 1)
        {
            // right me jana hai
            start = mid + 1;
        }
        else
        {
            // here diff ki value 1 ke equal nahi hoti hai to answer store karna hai
            // and left me check karna hai
            // ans store
            answer = mid;
            // hame left me jana hoga
            end = mid - 1;
        }
        // yaha par mistake hoti hai
        // because mid element ko update karana hota hai
        mid = start + (end - start) / 2;
    }

    // here last wala anser zero (0) aa rha hai to n+1 return kar sakte hai
    // means last element me one plus kar dena hai
    //  Home work:- whole code me aisa kya change kar de to es condition ki need na pade  
    if (answer + 1 == 0)
        return n + 1;

    return answer + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int arrIndex = findMissingArrayElement(arr, n);
    cout << "Missing Array Element:- " << arrIndex << endl;

    return 0;
}