//! HOMEWORK
// - Write a function to print counting from 1 to 100
// - Write a function to find simple interest
// - Write a function to print prime numbers from 1 to 100
// - Write a function check whether someone is eligible for Voting or not
// - Write a SIP calculator using function's concept

#include <iostream>
#include <cmath>
using namespace std;

// ! function to print counting from 1 to 100
void printCounting()
{
    cout << "Counting from 1 to 100:\n";
    for (int i = 1; i <= 100; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

// ! function to find simple interest
void simpleInterest(float p, float r, float t)
{
    float SI = (p * r * t) / 100;
    cout << "Simple Interest = " << SI << endl;
}

// ! function to print prime numbers from 1 to 100
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printPrimes()
{
    cout << "Prime numbers from 1 to 100:\n";
    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

// ! function check whether someone is eligible for Voting or not
void checkVoting(int age)
{
    if (age >= 18)
    {
        cout << "You are eligible for voting.\n";
    }
    else
    {
        cout << "You are NOT eligible for voting.\n";
    }
}

// ! SIP calculator using function's concept
void sipCalculator(float monthlyInvestment, float annualRate, int years)
{
    float monthlyRate = annualRate / (12 * 100);
    int months = years * 12;

    float futureValue = monthlyInvestment *
                        ((pow(1 + monthlyRate, months) - 1) / monthlyRate) * (1 + monthlyRate);

    cout << "Future Value of SIP = " << futureValue << endl;
}

int main()
{

    printCounting(); // counting

    cout << "\n--------------------------\n";

    simpleInterest(1000, 5, 2); // simple interest

    cout << "\n--------------------------\n";

    printPrimes(); // prime Numbers

    cout << "\n--------------------------\n";

    checkVoting(20); // voting eligibility

    cout << "\n--------------------------\n";

    sipCalculator(2000, 12, 5); // SIP calculator

    return 0;
}