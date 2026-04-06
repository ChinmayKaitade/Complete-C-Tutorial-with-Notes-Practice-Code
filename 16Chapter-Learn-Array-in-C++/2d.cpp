#include <iostream>
using namespace std;

//! using function
void print2DArray(int arr[][4], int rowSize, int colSize)
{
    cout << "Printing the 2D Array: " << endl;

    //! printing
    for (int row_index = 0; row_index <= rowSize - 1; row_index++)
    {
        for (int col_index = 0; col_index <= colSize - 1; col_index++)
        {
            cout << arr[row_index][col_index] << " ";
        }
        cout << endl;
    }
}

int main()
{
    //! declare
    // int arr[5][4];

    //! initialization
    // int arr[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    // cout << arr[0][3] << endl;

    //! printing
    // int arr[3][4] = {
    //     {10, 20, 30, 40},
    //     {11, 12, 13, 14},
    //     {21, 22, 23, 24},
    // };
    // int row = 3;
    // int col = 4;

    // for (int row_index = 0; row_index <= row - 1; row_index++)
    // {
    //     for (int col_index = 0; col_index <= col - 1; col_index++)
    //     {
    //         cout << arr[row_index][col_index] << " ";
    //     }
    //     cout << endl;
    // }

    //! via taking input from user
    // int arr[3][4];
    // int row = 3;
    // int col = 4;

    // for (int row_index = 0; row_index <= row - 1; row_index++)
    // {
    //     for (int col_index = 0; col_index <= col - 1; col_index++)
    //     {
    //         cout << "Enter the input for arr[" << row_index << "][" << col_index << "]:";
    //         cin >> arr[row_index][col_index];
    //     }
    //     cout << endl;
    // }

    // for (int row_index = 0; row_index <= row - 1; row_index++)
    // {
    //     for (int col_index = 0; col_index <= col - 1; col_index++)
    //     {
    //         cout << arr[row_index][col_index] << " ";
    //     }
    //     cout << endl;
    // }

    //! via using function
    int arr[3][4];
    int row = 3;
    int col = 4;

    for (int row_index = 0; row_index <= row - 1; row_index++)
    {
        for (int col_index = 0; col_index <= col - 1; col_index++)
        {
            cout << "Enter the input for arr[" << row_index << "][" << col_index << "]:";
            cin >> arr[row_index][col_index];
        }
        cout << endl;
    }

    print2DArray(arr, row, col);

    return 0;
}