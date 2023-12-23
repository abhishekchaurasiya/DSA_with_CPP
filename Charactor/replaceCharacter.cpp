#include <iostream>
#include <string.h>
using namespace std;

// input : @My@name@is@abhishek@chaurasiya
// output : My name is abhishek chaurasiya

void replaceCharacter(char ch[])
{

    int index = 0;
    while (ch[index] != '\0')
    {
        if (ch[index] == '@')
        {
            ch[index] = ' ';
        }
        index++;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch, 100);

    cout << "before: " << ch << endl;
    replaceCharacter(ch);

    cout << "After: " << ch << endl;

    return 0;
}