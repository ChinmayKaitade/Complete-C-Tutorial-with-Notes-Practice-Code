#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: " << endl;

    // Marks Input
    cin >> marks;

    if (marks > 90)
    {
        cout << "A Grade" << endl;
    }
    else if (marks > 80)
    {
        cout << "B Grade" << endl;
    }
    else if (marks > 70)
    {
        cout << "C Grade" << endl;
    }
    else if (marks > 60)
    {
        cout << "D Grade" << endl;
    }
    else{
        cout << "You Failed!" << endl;

    }

    return 0;
}
