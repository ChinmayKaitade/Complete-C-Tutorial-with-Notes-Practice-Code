//! HOMEWORK
// - Write a function to populate an array with multiple of 10
// - Initialise an Array with -1 in each block
// - Print Sum of entire array elements
// - Write a function to Reverse an Array
// - Flip 1 to 0 and 0 to 1 in an Array

#include <iostream>
#include <algorithm> // for swap
using namespace std;

//! 1. Function to populate an array with multiples of 10
void populateMultiplesOf10(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = (i + 1) * 10;
    }
}

//! Function to Reverse an Array (using Two-Pointer approach)
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

//! Function to Flip 1 to 0 and 0 to 1
void flipBinary(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // Method 1: Logic
        if (arr[i] == 1)
            arr[i] = 0;
        else if (arr[i] == 0)
            arr[i] = 1;

        // Method 2 (Pro Tip): arr[i] = 1 - arr[i];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int size = 5;
    int myArr[5];

    //! 2: Initialise an Array with -1
    for (int i = 0; i < size; i++)
    {
        myArr[i] = -1;
    }
    cout << "Array initialized with -1: ";
    printArray(myArr, size);

    //! 1: Populate with multiples of 10
    populateMultiplesOf10(myArr, size);
    cout << "Multiples of 10: ";
    printArray(myArr, size);

    //! 3: Print Sum of entire array
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += myArr[i];
    }
    cout << "Sum of array elements: " << sum << endl;

    //! 4: Reverse the Array
    reverseArray(myArr, size);
    cout << "Reversed Array: ";
    printArray(myArr, size);

    //! 5: Flip 1 to 0 and 0 to 1
    int binArr[] = {1, 0, 1, 1, 0};
    cout << "Original Binary: ";
    printArray(binArr, 5);
    flipBinary(binArr, 5);
    cout << "Flipped Binary:  ";
    printArray(binArr, 5);

    return 0;
}