#include <iostream>
using namespace std;

bool isPalindromePossible(string a, string b)
{
    int i, j;
    i = 0;
    j = b.size() - 1;

    // for substrings s1 and s2 that need to be concatenated to result into a palindrome, it should be of length atleast 1 (both s1 and s2).This means, at least one character of a and one character of b must be same. Hence, if at least such a character match is found, it is bound to result into palindrome

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = b.size() - 1; j >= 0; j--)
        {
            if (b[j] == a[i])
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;

        cin >> a;
        cin >> b;

        if (isPalindromePossible(a, b))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}