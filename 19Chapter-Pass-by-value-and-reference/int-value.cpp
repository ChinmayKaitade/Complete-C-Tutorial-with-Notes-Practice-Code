#include <iostream>
using namespace std;

void solve(int a)
{
    cout << "Inside function " << a << endl;
    a++;
    cout << "Inside function " << a << endl;
}

int main()
{
    int a = 5;
    cout << "Inside main " << a << endl;
    solve(a);
    cout << "Inside main " << a << endl;

    return 0;
}