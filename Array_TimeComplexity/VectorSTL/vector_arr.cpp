#include <iostream>
#include <vector>
using namespace std;

void printVectorWithArr(vector<int> &v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << endl;
        // cout << v.at(i) << endl;
    }
}

// using foreach method;
void printVectorWithArr2(vector<int> &v)
{
    int size = v.size();
    for (auto arr : v)
    {
        cout << arr << " ";
    }
}

int main()
{
    vector<int> n;
    n.push_back(10);
    n.push_back(20);
    n.push_back(30);
    n.push_back(40);
    printVectorWithArr2(n);

    // vector<char> n;
    // n.push_back('a');
    // n.push_back('b');
    // n.push_back('c');
    // n.push_back('d');

    // cout << "first element:--> " << n[0] << endl; // or
    // cout << "first element:--> " << n.front() << endl;

    // cout << "last element:--> " << n[n.size() - 1] << endl;
    // cout << "last element:--> " << n.back() << endl;

    // types of vector initialization
    // 1st way
    // vector<int> arr; // default with no data, 0 size
    // printVectorWithArr(arr);

    // 2nd way
    // vector<int> arr2(6, -1); // initialize with n size with specific data
    // arr2.push_back(30);
    // arr2.pop_back();
    // arr2.push_back(23);
    // printVectorWithArr(arr2);

    // 3rd way
    // vector<int> arr3 = {1, 2, 3, 4, 5};
    // arr3.pop_back();
    // arr3.push_back(30);
    // arr3.push_back(40);
    // // printVectorWithArr(arr3);

    // // 4th way
    // vector<int> arr4{1, 2, 3, 4, 5};
    // arr4.push_back(12);
    // arr4.push_back(13);
    // arr4.pop_back();
    // arr4.push_back(14);
    // // printVectorWithArr(arr4);

    // // How to copy vector a array
    // vector<int> arr5 = {1, 2, 3, 4, 5, 6};
    // arr5.push_back(20);
    // printVectorWithArr(arr5);

    // vector<int> arr6(arr5);  // here copy to the vector
    // arr6.push_back(60);
    // printVectorWithArr(arr6);

    // vector<int> v;

    // while (1)
    // {
    //     int d;
    //     cin >> d;
    //     // insert
    //     arr.push_back(d);
    //     cout << "Capacity: " << arr.capacity() << " Size: " << arr.size();
    // }

    // // inster element
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    // printVectorWithArr(v);
    // cout<<endl;

    // delete the last element in array
    // v.pop_back();
    // printVectorWithArr(v);

    // array element delete or clear karna

    // user ke through input lena
    // vector<int>
    //     arr;
    // int n;
    // cin >> n;

    // for (int i = 0; i < n; ++i)
    // {
    //     int d;
    //     cin >> d;
    //     arr.push_back(d);
    // };
    // cout << "Printing vector:--> and size: " << arr.size() << endl;
    // printVectorWithArr(arr);

    // Array ke inside new array element insert karna
    // cout << "Insert new array element to the exists array " << endl;
    // for (int i = 0; i < 10; ++i)
    // {
    //     arr.push_back(20);
    // };

    // arr.clear();
    // cout << "Clear all the vector element: " << arr.size() << endl;

    // printVectorWithArr(arr);

    return 0;
}