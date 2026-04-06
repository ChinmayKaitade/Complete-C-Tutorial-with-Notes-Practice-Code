#include <iostream>
using namespace std;

//! Find Length
int getLength(char arr[])
{
    int count = 0;
    int index = 0;
    while (arr[index] != '\0')
    {
        count++;
        index++;
    }

    return count;
}

//! Concat
void concatArray(char a[], char b[])
{
    int aIndex = getLength(a);
    int bIndex = 0;

    while (b[bIndex] != '\0')
    {
        // start copy
        a[aIndex] = b[bIndex];
        aIndex++;
        bIndex++;
    }
    // end a string with Null character
    a[aIndex] = '\0';
}

//! Copying
void copyArray(char actualArr[], char copyArr[])
{
    int aIndex = 0;
    int bIndex = 0;

    while (actualArr[aIndex] != '\0')
    {
        // start copying
        copyArr[bIndex] = actualArr[aIndex];
        aIndex++;
        bIndex++;
    }
    copyArr[bIndex] = '\0';
}

//! Comparison
bool comparisonArray(char a[], char b[])
{
    int aIndex = 0;
    int bIndex = 0;
    int aLength = getLength(a);

    while (aIndex <= aLength)
    {
        if (a[aIndex] != b[bIndex])
        {
            return false;
        }
        else
        {
            aIndex++;
            bIndex++;
        }
    }

    // agar yaha tak aagye ho iska mtlb saare character match hogye hain
    return true;
}

int main()
{
    //! Find Length
    // char arr[] = "love chinmay";
    // cout << getLength(arr) << endl;

    //! Concat
    // char a[50] = "love";
    // char b[50] = "chinmay";
    // concatArray(a, b);
    // cout << "Printing a: " << a << endl;

    //! Copying
    // char actual[100] = "chinmay";
    // char ans[100];

    // copyArray(actual, ans);
    // cout << "Printing ans array: " << ans << endl;

    //! Comparison
    char arr[] = "love";
    char brr[] = "lov";
    cout << comparisonArray(arr, brr) << endl;

    //! declare
    // char arr[10];
    // cout << arr[3] << endl;

    // char arr[10] = "chinmay";
    // cout << arr[5] << endl;

    // cout << "Printing 6th Index: " << arr[6] << endl;
    // int asciiValue = arr[10];
    // cout << asciiValue << endl;

    // char arr[4];
    // arr[0]='a';
    // arr[1]='b';
    // arr[2]='\0';

    // int arr[4] = {1, 2, 3, 4};
    // cout << arr << endl;

    // char brr[5] = "love";
    // cout << brr << endl;
    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << brr[i] << " ";
    // }

    return 0;
}