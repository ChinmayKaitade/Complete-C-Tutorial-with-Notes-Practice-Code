//! HOMEWORK
// - Reverse a String
// - Check for Palindrome
// - Count vowel or consonants
// - Valid Anagram or not
// - Convert Case
// - How to convert a string into an Integer

#include <iostream>
#include <string>
#include <algorithm> // for reverse and sort
#include <vector>
using namespace std;

//! 1. Reverse a String
string reverseString(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
    return s;
}

//! 2. Check for Palindrome
bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}

//! 3. Count Vowels & Consonants
void countAlpha(string s)
{
    int v = 0, c = 0;
    for (char ch : s)
    {
        if (isalpha(ch))
        {
            char low = tolower(ch);
            if (low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u')
                v++;
            else
                c++;
        }
    }
    cout << "Vowels: " << v << ", Consonants: " << c << endl;
}

//! 4. Valid Anagram (Two strings with same characters in different order)
bool isAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

//! 5. Convert Case (Lower to Upper and vice versa)
string toggleCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32; // Lower to Upper
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32; // Upper to Lower
    }
    return s;
}

int main()
{
    string str = "Chinmay";

    //! Task 1 & 2
    cout << "Reverse: " << reverseString(str) << endl;
    cout << "Is 'racecar' Palindrome? " << (isPalindrome("racecar") ? "Yes" : "No") << endl;

    //! Task 3
    countAlpha("Hello World");

    //! Task 4
    cout << "Are 'listen' and 'silent' anagrams? " << (isAnagram("listen", "silent") ? "Yes" : "No") << endl;

    //! Task 5
    cout << "Toggled Case: " << toggleCase("aBcDe") << endl;

    //! TASK 6: String to Integer ---
    string numStr = "12345";
    int num = stoi(numStr); // Use the built-in stoi function
    cout << "String to Int: " << num + 5 << " (Added 5 to check)" << endl;

    return 0;
}