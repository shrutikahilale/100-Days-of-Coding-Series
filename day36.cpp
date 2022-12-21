#include <iostream>
using namespace std;

// Write a Program to Capitalize the first and last letter of each word of a string

int main()
{
    string s;
    cout << "enter string: ";
    getline(cin, s);

    s[0] = toupper(s[0]);
    s[s.size() - 1] = toupper(s[s.size() - 1]);

    cout << s;

    return 0;
}