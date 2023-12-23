#include <iostream>
using namespace std;

// if you enter lower case alphabet print 1 and upper case alphabet print 0 and nothing print -1
int main()
{
    char c;
    cout << "Enter the char or value: " << endl;
    cin >> c;
    if ('a' <= c && c <= 'z')
    {
        cout << 1;
    }
    else if ('A' <= c && c <= 'Z')
    {
        cout << 0;
    }
    else
    {
        cout << -1;
    }
}