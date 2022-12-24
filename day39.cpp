#include <iostream>
#include <unordered_map>
using namespace std;

// Write a Program to check if two strings are Anagram or not

int main()
{
    string s1, s2;
    unordered_map<char, int> freq;

    cout << "Enter string1: ";
    cin >> s1;
    cout << "Enter string2: ";
    cin >> s2;

    for (char c : s1)
    {
        freq[c]++;
    }

    for (char c : s2)
    {
        if (freq.find(c) != freq.end())
        {
            freq[c]--;
        }
    }

    bool isAnagram = true;
    for (auto itr : freq)
    {
        if (itr.second > 0)
        {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
        cout << "Anagram";
    else
        cout << "Not anagram";

    return 0;
}