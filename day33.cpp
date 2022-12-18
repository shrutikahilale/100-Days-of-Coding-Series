#include <iostream>
using namespace std;

// Write a program to check if a string is palindrome or not.

int main()
{
    string s;
    cout << "enter a string: ";
    cin >> s;

    int n = s.size();
    bool flag = true;

    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (s[i] != s[j])
        {
            flag = false;
            break;
        }
    }

    string res = flag ? "Palindrome" : "Not a palindrome";
    cout << res;

    return 0;
}