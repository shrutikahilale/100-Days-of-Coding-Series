#include <iostream>
using namespace std;

bool isFeedbackGood(string s)
{
    // 010 or 101
    int n = s.size();

    for (int i = 0; i < n - 2; i++)
    {
        if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') ||
            (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
        {
            return true;
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
        string s;
        cin >> s;

        string res = isFeedbackGood(s) ? "Good" : "Bad";
        cout << res << "\n";
    }

    // 1 1 1 1 1
    // 1 1 1 (0-2)
    // 1 1 1 (1-3)
    // 1 1 1 (2-4)
    // for loop iterated for 3 times but
    // the same character is checked maximum of 3 times and minimum of 1 time
    // TC: O(n) where n is the size of string

    return 0;
}