#include <iostream>
using namespace std;

// Write a Program to Toggle each character in a string

int main()
{
    string s;
    cout << "enter string: ";
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] <= 122 && s[i] >= 97)
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] <= 90 && s[i] >= 65)
        {
            s[i] = s[i] + 32;
        }
    }

    cout << s;

    return 0;
}