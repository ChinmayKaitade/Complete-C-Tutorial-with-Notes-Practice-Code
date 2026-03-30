#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << a << endl;

    //! Increment
    cout << (++a) << endl;
    // Pre-increment: Pehle value badhao (5 -> 6), phir print karo.

    cout << (a++) << endl;
    // Post-increment: Pehle purani value 6 print karo, phir badhao (6 -> 7).

    cout << a << endl;
    // Check updated value

    //! Decrement
    cout << (--a) << endl;
    // Pre-Decrement: 7 -> 6, then print

    cout << (a--) << endl;
    // Post-Decrement: Print 6, then 6 -> 5

    cout << a << endl;
    // Final Value

    //! Arithmetic Operators
    // (+, -, *, /, %)
    int x = 10;
    int y = 5;

    cout << "Addition: " << (x + y) << endl;
    cout << "Subtraction: " << (x - y) << endl;
    cout << "Multiplication: " << (x * y) << endl;
    cout << "Division: " << (x / y) << endl;
    cout << "Remainder: " << (x % y) << endl;

    //! Relational Operators
    // (>, <, >=, <=, ==, !=)
    cout << (10 > 5) << endl;
    cout << (10 < 5) << endl;
    cout << (10 >= 5) << endl;
    cout << (10 <= 5) << endl;
    cout << (10 == 5) << endl;
    cout << (10 != 5) << endl;

    //! Logical Operator
    // (&&, ||, !=)
    bool cond1 = 10 > 5;
    bool cond2 = 5 < 5;
    bool cond3 = 2 != 2;

    // && operator
    if (cond1 && cond2 && cond3)
    {
        cout << "All conditions are true" << endl;
    }
    else
    {
        cout << "All conditions are not true" << endl;
    }

    // || operator
    if (cond1 || cond2 || cond3)
    {
        cout << "All conditions are true" << endl;
    }
    else
    {
        cout << "All conditions are not true" << endl;
    }

    // ! operator
    bool condition = 5 != 10;
    cout << condition << endl;
    cout << !condition << endl;

    //! Assignment Operator
    // (=, +=, -=, *=, /=, %=)
    int arr = 5;
    cout << arr << endl;

    // arr = arr + 10;
    arr += 10;
    cout << "For += operator: " << arr << endl;

    arr *= 10;
    cout << "For *= operator: " << arr << endl;

    //! Bitwise Operator
    // (&, |, ~, <<, >>, ^)
    cout << "& Operator: " << (5 & 4) << endl;
    cout << "& Operator: " << (1 & 0) << endl;
    cout << "& Operator: " << (1 & 1) << endl;
    cout << "| Operator: " << (1 | 0) << endl;
    cout << "~ Operator: " << (~1) << endl;
    cout << "<< Operator: " << (5 << 4) << endl;
    cout << ">> Operator: " << (100 >> 1) << endl;
    cout << "^ Operator: " << (5 ^ 5) << endl;
    cout << "^ Operator: " << (5 ^ 4) << endl;

    return 0;
}