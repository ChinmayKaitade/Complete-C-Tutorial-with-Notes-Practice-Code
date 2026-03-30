//! HOMEWORK QUESTIONS

// 1. Printing from 1 to 100
// 2. Printing from 100 to 1
// 3. Printing Name for 50 times
// 4. Printing from 0 to -10
// 5. Printing multiplication table of 7
// 6. Printing Alphabets from A to Z
// 7. Printing Alphabets from a to z

#include <iostream>
using namespace std;

int main()
{
    // 1. Printing from 1 to 100
    //! Using For Loop
    cout << "******For loop -> Printing from 1 to 100******" << endl;
    for (int j = 1; j <= 100; j = j + 1)
    {
        cout << "Using For loop - Iteration " << j << endl;
    }

    //! Using While Loop
    cout << "******While loop -> Printing from 1 to 100******" << endl;
    int i = 1;
    while (i <= 100)
    {
        cout << "Using While loop - Iteration " << i << endl;
        i = i + 1;
    }

    // 2. Printing from 100 to 1
    //! Using For Loop
    cout << "******For loop -> Printing from 100 to 1******" << endl;
    for (int i = 100; i >= 1; i = i - 1)
    {
        cout << "Using For loop - Iteration " << i << endl;
    }

    //! Using While Loop
    cout << "******While loop -> Printing from 100 to 1******" << endl;
    int num = 100;
    while (num >= 1)
    {
        cout << "Using While loop - Iteration " << num << endl;
        num = num - 1;
    }

    // 3. Printing Name for 50 times
    cout << "******For loop -> Printing Name for 50 times******" << endl;
    //! Using For Loop
    for (int a = 1; a <= 50; a = a + 1)
    {
        cout << "Using For loop - My Name is Chinmay Iteration " << a << endl;
    }

    //! Using While Loop
    cout << "******While loop -> Printing Name for 50 times******" << endl;
    int b = 1;
    while (b <= 50)
    {
        cout << "Using While loop - My Name is Chinmay Iteration " << b << endl;
        b = b + 1;
    }

    // 4. Printing from 0 to -10
    //! Using For Loop
    cout << "******For loop -> Printing from 0 to -10******" << endl;
    for (int c = 0; c >= -10; c = c - 1)
    {
        cout << "Using For loop - Iteration " << c << endl;
    }

    //! Using While Loop
    cout << "******While loop -> Printing from 0 to -10******" << endl;
    int d = 0;
    while (d >= -10)
    {
        cout << "Using While loop - Iteration " << d << endl;
        d = d - 1;
    }

    // 5. Printing multiplication table of 7
    //! Using For Loop
    cout << "******For loop -> Printing multiplication table of 7******" << endl;
    for (int num1 = 1; num1 <= 10; num1 = num1 + 1)
    {
        cout << "Using For loop - Multiplication table for 7 : 7 x " << num1 << " = " << 7 * num1 << endl;
    }

    //! Using While Loop
    cout << "******While loop -> Printing multiplication table of 7******" << endl;
    int num2 = 1;

    while (num2 <= 10)
    {
        cout << "Using While loop - Multiplication table for 7 : 7 x "
             << num2 << " = " << 7 * num2 << endl;

        num2 = num2 + 1;
    }

    // 6. Printing Alphabets from A to Z
    //! Using For Loop
    cout << "******For loop -> Printing Alphabets from A to Z******" << endl;
    for (char ch = 'A'; ch <= 'Z'; ch = ch + 1)
    {
        cout << "Using For loop - Printing Alphabets from A to Z: "
             << ch << endl;
    }

    //! Using While Loop
    cout << "******While loop -> Printing Alphabets from A to Z******" << endl;
    char ch1 = 'A';
    while (ch1 <= 'Z')
    {
        cout << "Using While loop - Printing Alphabets from A to Z: "
             << ch1 << endl;
        ch1 = ch1 + 1;
    }

    // 7. Printing Alphabets from a to z
    //! Using For Loop
    cout << "******For loop -> Printing Alphabets from a to z******" << endl;
    for (char var = 'a'; var <= 'z'; var = var + 1)
    {
        cout << "Using For loop - Printing Alphabets from a to z: "
             << var << endl;
    }

    //! Using While Loop
    cout << "******While loop -> Printing Alphabets from a to z******" << endl;
    char var1 = 'a';
    while (var1 <= 'z')
    {
        cout << "Using While loop - Printing Alphabets from a to z: "
             << var1 << endl;
        var1 = var1 + 1;
    }

    return 0;
}