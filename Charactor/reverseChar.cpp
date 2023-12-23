#include <iostream>
#include <string.h>
using namespace std;

int findStringlength(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        index++;
    }
    return index;
}

void reverseOfString(char ch[], int n)
{
    // using here two pointer method
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch, 100);

    cout << "Print before: " << ch << endl;

    int length = findStringlength(ch, 100);
    reverseOfString(ch, length);

    cout << "Print after: " << ch << endl;

    // predefine function se bhi length get kar skte hai
    // int len = strlen(ch);
}