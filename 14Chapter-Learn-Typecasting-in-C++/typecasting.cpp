#include <iostream>
using namespace std;

int main()
{
    //! IMPLICIT CASTING
    //! 1. int to float
    cout << "******int to float******" << endl;
    int num1 = 10;
    float num2 = 5.5;

    float result = num1 + num2;
    cout << result << endl;

    //! 2. char to int
    cout << "******char to int******" << endl;
    char ch = 'A';
    int a = ch + 1;
    cout << a << endl;

    //! 3. int to char
    cout << "******int to char******" << endl;
    int a = 97;
    char ch = a;
    cout << a << endl;

    //! EXPLICIT CASTING
    //! 1. double to int
    cout << "******double to int******" << endl;
    double pi = 3.14159265;
    int intPi = (int)pi;
    cout << intPi << endl;

    //! 2. float to char
    cout << "******float to char******" << endl;
    float floatingNumber = 65.5;
    char charValue = (char)floatingNumber;
    cout << charValue << endl;

    //! 3. int to float
    cout << "******int to float******" << endl;
    int a = 10;
    int b = 3.0;
    float c = a / b;
    cout << c << endl;

    return 0;
}
