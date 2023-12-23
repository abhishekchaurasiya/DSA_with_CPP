#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // string myStr = "Hello";
    // initialize
    // string myStr;

    // input
    // getline(cin, myStr);

    // cout << myStr[4] << endl;

    // using loop

    // int index = 0;
    // while (myStr[index] != '\0')
    // {
    //     cout << "index: " << index << " character: " << myStr[index] << endl;
    //     index++;
    // }

    // always null character ki value zero (0) hoti hai
    // int value = (int)myStr[8];
    // cout << "value of null character: " << value << endl;

    // Uses of predefined function

    // string name;
    // getline(cin, name);

    // Get size of length of string
    // cout<<"length of string: "<<name.length()<<endl;
    // cout<<"length of string: "<<name.size()<<endl;

    // empty() function me value true(1) and false(0) return hoti hai
    // string name = " ";
    // cout << "check empty string: " << name.empty() << endl;

    string name = "Hellooo";
    // push_back() and pop_back() ye last me string add and remove karte hai
    // cout << "before: " << name << endl;
    // name.push_back('R');

    // cout << name << endl;

    // name.pop_back();
    // cout << name << endl;

    // at() means string ke kaun se index par character hai
    // cout << name.at(0) << endl;

    // front() and back() means first and last character print karta hai
    // cout << name.front() << endl;
    // cout << name.back() << endl;

    // append() means two or more string ko one string me concatinate karna
    // string str1 = "Ram";
    // string str2 = " Shyam ";
    // cout << str1.append(str2) << endl;
    // cout << str2.append(str1) << endl;

    // erase() mean string ke inside some part ko erase karna chahata hu
    // means main kaun se index ke ahead kitne characters remove karna chahata hu
    // string ch = "My name is abhishek chaurasiya";
    // here is 7 index and 3 characters
    // cout << ch.erase(7, 3) << endl;

    // insert() funtion es function ke through exists string me hi character add kar skte hai
    // string n = "Love Babbar";
    // string n1 = " Kumar";

    // n.insert(4, n1);
    // cout << n;

    // find() function
    // string n = "yar mera super start desi kalakar";
    // string s1 = "stark";
    // if string::npos ke equal string aa gayi ko find nahi hota hai
    // agar equal ho gya to find hota hai
    // npos means not position
    // if (n.find(s1) == string::npos)
    // {
    //     cout << "Not found" << endl;
    // }
    // else
    // {
    //     cout << "Found" << endl;
    // }

    // compare() function
    // string str1 = "Love";
    // string str2 = "love";

    // if (str1.compare(str2) == 0)
    // {
    //     cout << "matched" << endl;
    // }
    // else
    // {
    //     cout << "not matched" << endl;
    // }

    // substr() function means one long string hai but usme se some part get karna chahate hai
    string str1 = "this is my dear programming language is c++";
    // means 5 index se 7 length ki string get karna hai
    // cout << str1.substr(5, 7);

    string na = "daabcbaabcbc";
    string ad = "abc";
    if (na.find(ad) == string::npos)
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }

    string s = "abbabcbabcbbabc";
    int index = 0;
    while (index < s.length())
    {
        // if (s[index] == "a")
        // {
        //     cout << "found" << endl;
        // }
        // else
        // {
        //     cout << "not found" << endl;
        // }
        cout<<s[index]<<endl;
        index++;
    }

    return 0;
}