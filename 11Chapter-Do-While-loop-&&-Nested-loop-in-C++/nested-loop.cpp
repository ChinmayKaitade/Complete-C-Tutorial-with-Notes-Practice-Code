#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 3; i = i + 1)
    {
        for (int j = 1; j <= 3; j = j + 1)
        {
            cout << "i: " << i << ", j: " << j << endl;
        }
    }

    for (int a = 1; a <= 2; a = a + 1)
    {
        for (int b = 1; b <= 2; b = b + 1)
        {
            cout << a * b << " ";
        }
    }

    return 0;
}