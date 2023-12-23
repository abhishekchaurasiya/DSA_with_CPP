#include <iostream>
using namespace std;

int getUniqueElement(int arr[], int size)
{
    int answer = 0;
    for (int i = 0; i < size; i++)
    {
        answer = answer ^ arr[i];
    }
    return answer;
}

int main()
{
    int arr[] = {2, 10, 11, 10, 2, 13, 15, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = getUniqueElement(arr, size);
    cout << "Unique element: " << result << endl;

    return 0;
}