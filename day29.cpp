#include <iostream>
using namespace std;

// Write a program to concatenate two strings

int main()
{
    string s1, s2;
    cout << "enter first string: ";
    cin >> s1;
    cout << "enter second string: ";
    cin >> s2;

    string res = s1 + s2;
    cout << res;

    return 0;
}