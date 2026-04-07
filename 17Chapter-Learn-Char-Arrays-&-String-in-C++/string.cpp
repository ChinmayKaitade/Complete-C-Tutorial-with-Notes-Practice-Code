#include <iostream>
using namespace std;

int main()
{
    //! Library Functions [Strings]
    // str.length
    string str = "chinmay";
    cout << "Length: " << str.length() << endl;

    // str.append
    string temp = "love";
    str.append(temp);
    // cout << str << endl;

    // str.insert
    str.insert(0, temp);
    cout << str << endl;

    // str.substr
    string str1 = "statement";
    cout << str1.substr(5, 4) << endl;

    // str.compare
    string a = "love";
    string b = "love";

    if (a.compare(b) == 0)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }

    // str.find
    string c = "My name is Chinmay Kaitade";
    // 11 index -> 'C'
    string d = "Chinmay";

    string c1 = "My name is Chinmay Kaitade";
    // 11 index -> 'C'
    string d1 = "Chinmayi";
    int ans = c1.find(d1);
    if (ans == string::npos)
    {
        cout << "d1 string not found in c1 string" << endl;
    }
    else
    {
        cout << "d1 string found in c1 string" << endl;
    }
    cout << c.find(d) << endl;

    // declare
    string name;
    name.push_back('a');
    name.push_back('b');
    name.push_back('c');
    cout << name << endl;

    char arr[100];
    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';
    cout << arr << endl;

    // initialisation
    string surname = "kaitade";

    // updation
    surname = "love";

    return 0;
}