#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int totalSum = a + b;
    return totalSum;
}

int getMultiplication(int x, int y, int z)
{
    int result = x * y * z;
    return result;
}

void printNameTenTimes()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "chinmay" << endl;
    }
}

void printMultiples(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num * i << endl;
    }
}

int convertIntoCelcius(int far)
{
    int celcius = (far - 32) * 5 / 9;
    return celcius;
}

char convertIntoUpperCase(char ch)
{
    char answer = ch - 'a' + 'A';
    return answer;
}

int main()
{
    int ans = sum(4, 5);
    cout << ans << endl;

    int multiplicationAnswer = getMultiplication(2, 3, 4);
    cout << multiplicationAnswer << endl;

    printNameTenTimes();

    printMultiples(5);

    int far = 32;
    int InCelciusAns = convertIntoCelcius(far);
    cout << "IN Celcius: " << InCelciusAns << endl;

    char result = convertIntoUpperCase('k');
    cout << result << endl;

    return 0;
}