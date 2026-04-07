#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    // reference var
    int &temp = a;
    cout << temp << endl;
    temp--;
    cout << temp << endl;
    temp = temp * 10;
    cout << temp << endl;
    a++;
    a = a - 5;
    cout << a << endl;

    return 0;
}
