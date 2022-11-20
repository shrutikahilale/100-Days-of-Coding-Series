#include <iostream>
using namespace std;

// Write a program to identify if the character is an alphabet or not.

int main()
{
    char c;
    cin >> c;

    if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
        cout << "aplhabet";

    else
        cout << "not an alphabet";

    return 0;
}