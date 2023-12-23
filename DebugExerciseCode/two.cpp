/*
Pattern
1
23
345
4567
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = i;
        int count = 1;
        while (count <= i)
        {
            cout << j;
            j++;
            count++;
        }
        cout << endl;
        i++;
    }
}