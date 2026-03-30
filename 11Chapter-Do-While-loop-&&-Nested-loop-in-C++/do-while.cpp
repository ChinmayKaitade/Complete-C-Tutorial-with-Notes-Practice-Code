#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    do
    {
        cout << "Iteration " << i << endl;
        i = i + 1;
    } while (i <= 5);

    // do-while -> print 'Chinmay' 25 times
    int count = 25;

    int j = 1;
    do
    {
        cout << "My Name is Chinmay Iteration: " << j << endl;
        j = j + 1;
    } while (j <= count);

    return 0;
}