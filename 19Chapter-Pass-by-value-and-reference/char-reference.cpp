#include <iostream>
using namespace std;

void solve(string &a)
{
    cout << "Inside function " << a << endl;
    a = "Chinmay";
    cout << "Inside function " << a << endl;
}

void countEvenNum(int arr[], int size, int &count)
{
    for (int index = 0; index < size; index++)
    {
        if (arr[index] % 2 == 0)
        {
            count++;
        }
    }
}

int main()
{
    string name = "Love";
    cout << "Inside main " << name << endl;
    solve(name);
    cout << "Inside main " << name << endl;

    //! string
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int count = 0;

    countEvenNum(arr, size, count);
    cout << "Even Number count: " << count << endl;

    return 0;
}
