#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    // arr = arr + 1;

    // cout << arr + 1 << endl; // print the next element address
    // cout << &arr << endl;    // print address of 0th index
    // cout << arr << endl;     // print address of 0th index
    // cout << &arr[0] << endl; // print address of 0th index
    // cout << &arr[1] << endl; // print the next element address

    // wild pointer and  always avoid wild pointer
    // int *ptr; // declared the pointer
    // int *ptr = &arr[1];   // initialized the pointer
    // cout << ptr << endl;  // here get the pointer address
    // cout << *ptr << endl; // access the pointer element

    // deleteing pointer
    // int *ptrs = new int;
    // delete ptrs;  // delete the pointer address

    // cout << *ptrs << endl ;
    // cout << ptrs << endl ;

    // pointer to non-existent variable
    // int *ptr = &y;
    // cout << *ptr << endl; // here get the error

    // void pointer
    // void *ptr; // declared void pointer name
    // int x = 10;
    // ptr = &x;                              // assign the address of x to the void pointer ptr
    // int *intPtr = static_cast<int *>(ptr); // using static cast operator
    // cout << intPtr << endl;
    // cout << *intPtr << endl;

    // using Void Pointer for dynamic memory allocation
    // int *ptr = new int;
    // void *voidPtr = ptr;
    // int *intPtr = static_cast<int *>(voidPtr);
    // *intPtr = 10;
    // cout << *intPtr << endl;
    // cout << ptr << endl;
    // cout << voidPtr << endl;
    // cout << intPtr << endl;

    // Dangling Pointer
    int *p = new int;
    *p = 20;
    delete p;
    cout << *p << endl;  // Undefined Behavior

    return 0;
}