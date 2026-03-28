#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    (age >= 18) ? cout << "Can Vote" : cout << "Can't Vote";

    return 0;
}