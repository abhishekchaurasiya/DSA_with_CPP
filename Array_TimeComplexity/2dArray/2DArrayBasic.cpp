#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// // This function print rows wise all 2d array element
void print2DArrayRowWise(int arr[4][4], int row, int col)
{
    // this loop print all rows
    for (int i = 0; i < row; i++)
    {
        // this loop print all columns
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// // This function print columns wise all 2d array element
// void print2DArrayColumnsWise(int arr[4][4], int row, int col)
// {
//     // this loop print all columns
//     for (int i = 0; i < col; ++i)
//     {
//         // this loop print all rows
//         for (int j = 0; j < row; ++j)
//         {
//             // here first of all j and then i ko print karna padega
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
// }

// bool printTargetElem(int arr[4][4], int rows, int cols, int target)
// {
//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {
//             if (arr[i][j] == target)
//             {
//                 return true;
//             }
//         }
//     };
//     // yaha par loop ke inside value nahi find huyi to tab return false karega
//     return false;
// }

// int findMaxNumber(int arr[][4], int rows, int cols)
// {
//     int maxAns = INT_MIN;

//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {
//             if (arr[i][j] > maxAns)
//             {
//                 maxAns = arr[i][j]; // update the array
//             }
//         }
//     }
//     return maxAns;
// }

// int findMinNumber(int arr[][4], int rows, int cols)
// {
//     int minAns = INT_MAX;

//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {
//             if (arr[i][j] < minAns)
//             {
//                 minAns = arr[i][j]; // update the array
//             }
//         }
//     }
//     return minAns;
// }

// rows wise print sum
void printSum(int arr[][4], int rows, int cols)
{

    for (int i = 0; i < rows; ++i)
    {
        int sum = 0;
        for (int j = 0; j < cols; ++j)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

// columns wise print sum
void printSumCol(int arr[][4], int rows, int cols)
{
    for (int i = 0; i < cols; ++i)
    {
        int sum = 0;
        for (int j = 0; j < rows; ++j)
        {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }
}

void printDiagonalSum(int arr[][4], int rows)
{
    int sum = 0;
    for (int i = 0; i < rows; ++i)
    {
        sum += arr[i][i];
    }
    cout << sum << endl;
}

void printDiagonal(int arr[][4], int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        cout << arr[i][i] << " ";
    }
    cout << endl;
}

void printTransPoseOfAMatrix(int arr[][4], int rows, int cols)
{
    // this is upper triangle method
    for (int i = 0; i < rows; ++i)
    {
        // one time arr[i][j] swap ho jaye arr[j][i] ke to
        // return same thing swap na ho esliye j = i ka use kiya hai
        for (int j = i; j < cols; ++j)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // this is lower triangle method
    //     for (int i = 0; i < rows; ++i)
    //     {
    //         for (int j = 0; j < i; ++j)
    //         {
    //             swap(arr[i][j], arr[j][i]);
    //         }
    //     }
}

int main()
{
    // create a 2D array;
    // int arr[3][4];

    // // Yaha par number of columns ka hona must hai because memory me conversion 2d array se 1d array me number of colums ke through hi hota hai
    // int arr[][4];

    // // Es type se bhi 2d array ko initialize kar skte hai
    // int arr[3][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16}};

    // // Es type se bhi 2d array ko initialize kar skte hai
    // int arr[][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16}};

    // // Es type se 2d array ko initialize nahi kar skte hai
    // int arr[][] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16}};

    // How to access 2d array element

    // int arr[4][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16},
    // };
    // int row = 4;
    // int col = 4;

    // cout << "Print rows wise: " << endl;
    // print2DArrayRowWise(arr, row, col);

    // cout << endl;
    // cout << "Print columns wise: " << endl;
    // print2DArrayColumnsWise(arr, row, col);

    // // input for user of 2d array
    // int arr[3][4];
    // int row;
    // cin >> row;
    // int col;
    // cin >> col;

    // for (int i = 0; i < row; ++i)
    // {
    //     for (int j = 0; j < col; ++j)
    //     {
    //         cout << "Enter the input for row index; " << i << " column index: " << j << endl;
    //         cin >> arr[i][j];
    //     }
    // }

    // print2DArrayRowWise(arr, row, col);

    // // searching in 2d array
    // int arr[4][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16},
    // };

    // int rows = 4;
    // int cols = 4;
    // int target = 15;

    // cout << "Found or Not: " << printTargetElem(arr, rows, cols, target) << endl;

    // Print max number in 2d array
    // int arr[4][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 80},
    //     {9, 10, 110, 12},
    //     {13, 14, 15, 16},
    // };

    // int rows = 4;
    // int cols = 4;

    // cout << "Print max number:- " << findMaxNumber(arr, rows, cols) << endl;

    // print sum in 2d array
    // int arr[4][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 80},
    //     {9, 10, 110, 12},
    //     {13, 14, 15, 16},
    // };

    // int rows = 4;
    // int cols = 4;

    // cout << "Print rows wise: " << endl;
    // printSum(arr, rows, cols);

    // cout << "Print columns wise: " << endl;
    // printSumCol(arr, rows, cols);

    // print diagonal sum
    // int arr[4][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 80},
    //     {9, 10, 110, 12},
    //     {13, 14, 15, 16},
    // };

    // int rows = 4;
    // int cols = 4;

    // // printDiagonalSum(arr, rows);

    // cout << endl;
    // printDiagonal(arr, rows);

    // // print transpose of a matrix
    // int arr[4][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 80},
    //     {9, 10, 110, 12},
    //     {13, 14, 15, 16},
    // };

    // int rows = 4;
    // int cols = 4;
    // cout << endl
    //      << "Printing before transpose" << endl;
    // print2DArrayRowWise(arr, rows, cols);

    // cout << endl
    //      << "Doing transpose" << endl;

    // printTransPoseOfAMatrix(arr, rows, cols);

    // cout << endl
    //      << "Printing after transpose" << endl;
    // print2DArrayRowWise(arr, rows, cols);

    // vector<int> v;
    // cout << v.size();
    // cout << endl;

    // // 2d array with vector
    // vector<vector<int>> arr(5, vector<int>(10, -1));
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // Jagged array means every rows and columns ki size equal nhi honi chahiye
    // 2d array of vector
    vector<vector<int>> brr;

    // 1d array of vector
    vector<int> vec1(10, 0);
    vector<int> vec2(5, 1);
    vector<int> vec3(15, 0);
    vector<int> vec4(8, 1);
    vector<int> vec5(13, 0);

    cout << endl;

    // here pushing all 1d array of vector to 2d array of vector
    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

    cout << endl;

    // print here jagged array
    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr[i].size(); j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}

// H456GbGaXGcHb@r