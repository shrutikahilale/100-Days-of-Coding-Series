#include <iostream>
using namespace std;

// Write a Program to reverse a string.

void reverseStr(string &s)
{
    int i, j;
    i = 0, j = s.size() - 1;

    while (i <= j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}

int main()
{
    string s;
    cin >> s;

    reverseStr(s);
    cout << s;
    return 0;
}