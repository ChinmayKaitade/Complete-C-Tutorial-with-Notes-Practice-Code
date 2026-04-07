#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char actual[] = "chinmay";
    char ans[100];

    strcpy(ans, actual);
    cout << ans << endl;

    cout << "Length of actual array: " << strlen(actual) << endl;

    // ans = "love";
    ans[0] = 'k';

    if (strcmp(actual, ans) == 0)
    {
        cout << "char arrays are same" << endl;
    }
    else
    {
        cout << "char arrays are not same" << endl;
    }

    return 0;
}