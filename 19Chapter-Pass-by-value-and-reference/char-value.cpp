#include <iostream>
using namespace std;

void solve(char a)
{
    cout << "Inside function " << a << endl;
    a++;
    cout << "Inside function " << a << endl;
}

void solve1(string a)
{
    cout << "Inside function " << a << endl;
    a[0] = 'b';
    cout << "Inside function " << a << endl;
}

int main()
{
    //! char
    char a = 'k';
    cout << "Inside main " << a << endl;
    solve(a);
    cout << "Inside main " << a << endl;

    //! string
    string str = "love";
    cout << "Inside main " << str << endl;
    solve1(str);
    cout << "Inside main " << str << endl;

    return 0;
}