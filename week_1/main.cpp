#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout << "this is the even number"
                 << ": " << i << endl;
        }
    }
}