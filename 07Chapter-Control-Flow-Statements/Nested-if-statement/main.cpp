#include <iostream>
using namespace std;

int main()
{
    int height;
    cout << "Enter your height: " << endl;

    // Height Input
    cin >> height;

    int weight;
    cout << "Enter your weight: " << endl;

    // Weight Input
    cin >> weight;

    if (height > 5)
    {
        if (weight > 70)
        {
            cout << "Congratulations, you got a good BMI!" << endl;
        }
        else
        {

            cout << "Sorry Bhai , Tujhse na hoo payega!" << endl;
        }
    }
    else
    {
        cout << "Complain dila du bhai" << endl;
    }

    return 0;
}
