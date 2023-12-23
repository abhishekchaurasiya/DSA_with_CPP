#include <iostream>
#include <string.h>
using namespace std;

int findLengthOfString(char ch[], int size)
{

    // using while loop
    int index = 0;
    while (ch[index] != '\0')
    {
        index++;
    }

    return index;

    // int length = 0;
    // for (int i = 0; i < size; ++i)
    // {
    //     if (ch[i] == '\0')
    //     {
    //         // yaha par jaise hi null character mila
    //         // vaise hi ruk jana hai
    //         break;
    //     }
    //     else
    //     {
    //         // yaha par validate character mil gaya
    //         length++;
    //     }
    // }
    // return length;
}

int main()
{

    char ch[100];
    cin.getline(ch, 100);

    int lenght = findLengthOfString(ch, 100);

    cout << "length of string: " << lenght << endl;

    // predefine function for get a string length
    cout << "Print string length: " << strlen(ch) << endl;

    // char ch[10];

    // // cin >> ch;

    // cin.getline(ch, 100);

    // cout << "Print the value of ch: " << ch << endl;

    return 0;
}