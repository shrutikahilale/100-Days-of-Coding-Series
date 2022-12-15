#include <iostream>
using namespace std;

// Write a Program to print Length of the string without using strlen() function

int main()
{
    string s;
    cout << "enter string: ";
    cin >> s;

    int len = 0;

    for (auto i : s)
    {
        len++;
    }
    cout << len;

    return 0;
}