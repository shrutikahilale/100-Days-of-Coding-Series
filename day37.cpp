#include <iostream>
#include <map>
using namespace std;

// Write a Program to calculate the Frequency of characters in a string

int main()
{
    string s;
    map<char, int> freq;

    cout << "enter string: ";
    getline(cin, s);

    for (auto c : s)
    {
        freq[c]++;
    }

    for (auto itr : freq)
    {
        cout << itr.first << " " << itr.second << "\n";
    }

    return 0;
}