#include <iostream>
using namespace std;

int main()
{
    int budget;
    cout << "Enter your budget: " << endl;

    // Budget Input
    cin >> budget;

    if (budget > 2000000)
    {
        cout << "Congratulations, you can buy Scorpio!" << endl;
    }

    return 0;
}
