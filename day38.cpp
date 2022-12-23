#include <iostream>
#include <unordered_map>
using namespace std;

// Write a Program to print Non-repeating characters in a string

int main()
{
    string s;
    unordered_map<char, int> freq;

    cout << "enter string: ";
    getline(cin, s);

    for (auto c : s)
    {
        freq[tolower(c)]++;
    }

    for (auto itr : freq)
    {
        if (itr.second == 1)
            cout << itr.first << " ";
    }

    return 0;
}