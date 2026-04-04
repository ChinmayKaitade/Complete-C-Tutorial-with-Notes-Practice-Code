#include <iostream>
using namespace std;

void printArray(int arr2[], int size)
{
    for (int index = 0; index <= size - 1; index++)
    {
        cout << arr2[index] << " ";
    }
}

int main()
{

    //! declaration
    int laxman[101];
    int arr1[11];

    //! initialization
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[] = {10, 20, 30};

    int multipleOf2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    cout << multipleOf2[2] << endl;

    //! traverse
    for (int i = 0; i <= 9; i++)
    {
        cout << multipleOf2[i] << endl;
    }

    //! input in array
    // int arr[5];
    // for (int index = 0; index <= 4; index++)
    // {
    //     cout << "Enter the value of arr[" << index << "]:";
    //     cin >> arr[index];
    //     cout << endl;
    // }
    // for (int index = 0; index <= 4; index++)
    // {
    //     cout << arr[index] << " ";
    // }

    //! sum of elements in array
    // int arr[] = {10, 20, 30, 40, 50};
    // int sum = 0;
    // for (int i = 0; i <= 4; i++)
    // {
    //     sum = sum + arr[i];
    // }
    // cout << "Total Sum: " << sum << endl;

    int arr2[] = {10, 20, 30, 40};
    int size = 4;

    printArray(arr2, size);

    return 0;
}