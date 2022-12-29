#include <iostream>
using namespace std;

// Check if two strings match where one string contains wildcard characters

bool isalphabet(char c)
{
    return ((c <= 122 && c >= 97) || (c <= 90 && c >= 65));
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    bool flag = true;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i] || !isalphabet(s1[i]))
        {
            continue;
        }
        else
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "yes they match";
    }
    else
    {
        cout << "no they don't match";
    }
    return 0;
}