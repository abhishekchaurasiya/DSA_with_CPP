#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(char ch[], int len)
{
    int i = 0;       // first string
    int j = len - 1; // last string

    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // char ch[100] = {'a', 'b', 'c', 'd', 'e', 'd', 'f'};
    char ch[100]; 
    cin.getline(ch, 100);

    int len = strlen(ch);

    bool isPalindrome = checkPalindrome(ch, len);
    if (isPalindrome)
    {
        cout << "Valid Palindrome" << endl;
    }
    else
    {
        cout << "Invalid Palindrome" << endl;
    }

    return 0;
}