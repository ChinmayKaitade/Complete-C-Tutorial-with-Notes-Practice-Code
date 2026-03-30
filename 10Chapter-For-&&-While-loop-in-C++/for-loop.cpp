#include <iostream>
using namespace std;

int main()
{
    cout << "******For loop -> Print Chinmay 10 times******" << endl;
    // For loop -> Print Chinmay 10 times
    for (int count = 1; count <= 10; count = count + 1)
    {
        cout << "Chinmay " << count << endl;
    }

    cout << "******For loop -> Print counting from 1 to 10******" << endl;
    // For loop -> Print counting from 1 to 10
    for (int count = 1; count <= 10; count = count + 1)
    {
        cout << count << endl;
    }

    cout << "******For Loop -> Print counting from 51 to 69******" << endl;
    // For loop -> Print counting from 51 to 69
    for (int count = 51; count <= 69; count = count + 1)
    {
        cout << count << endl;
    }

    cout << "******Break Keyword******" << endl;
    // Break Keyword
    for (int i = 1; i <= 10; i = i + 1)
    {
        cout << "Iteration " << i << endl;
        if (i == 5)
        {
            break;
        }
    }

    cout << "******Continue Keyword******" << endl;
    // Continue Keyword
    for (int i = 1; i <= 5; i = i + 1)
    {
        if (i == 3)
        {
            continue;
        }
        cout << "Iteration " << i << endl;
    }

    return 0;
}