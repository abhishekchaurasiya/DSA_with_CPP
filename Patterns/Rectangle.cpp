#include <iostream>
using namespace std;

int main()
{

    /*

     * * * * * *
     * * * * * *
     * * * * * *


     */
    int rows;
    cout << "Enter the rows number:- " << endl;
    cin >> rows;

    int cols;
    cout << "Enter the column number:- " << endl;
    cin >> cols;

    for (int row = 0; row < rows; row++)
    { 
        for (int col = 0; col < cols; col++)
        {
            cout << "* ";
        }
            cout << endl;
    }
    return 0;
}