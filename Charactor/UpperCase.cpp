#include <iostream>
#include <string.h>
using namespace std;

void convertToUppercase(char ch[])
{
    int index = 0;
    while (ch[index] != '\0')
    {
        // here check our current character a to z ke between hona chahiye
        if (ch[index] >= 'a' && ch[index] <= 'z')
        {
            // apne current character ko lower case a ke sath minus and A ko plus kar diya
            // formula lowercase - 'a' + 'A'
            // 'a' - 'a' + 'A' => 97 - 97 + 65 => 65 => A
            // 'b' - 'a' + 'A' => 98 - 97 + 65 => 1 + 65 => 66 => B
            // 'c' - 'a' + 'A' => 99 - 97 + 65 => 2 + 65 => 67 => C

            // char array me character ko insert karte ja rhe hai
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch, 100);

    cout << "before: " << ch << endl;

    convertToUppercase(ch);
    cout << "After: " << ch << endl;

    return 0;
}