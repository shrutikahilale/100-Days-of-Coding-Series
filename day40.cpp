#include <iostream>
#include <utility>
#include <cmath>
using namespace std;

// Write a Program to Replace substring in a string

pair<int, int> findIdx(string s1, string s2)
{
    int n = s1.size();
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[j])
        {
            bool fl = true;
            int k;

            for (k = i; k < i + s2.size(); k++)
            {
                if (s1[k] != s2[j])
                {
                    fl = false;
                    j = 0;
                    break;
                }
                j++;
            }

            if (fl)
                return {i, k};
        }
        else
        {
            j = 0;
        }
    }

    return {-1, -1};
}

int main()
{
    string str, substr, newsubstr;
    cout << "Enter string: ";
    cin >> str;
    cout << "Enter string to be removed: ";
    cin >> substr;
    cout << "Enter string to be replaced: ";
    cin >> newsubstr;

    pair<int, int> p = findIdx(str, substr);
    int f = p.first, l = p.second;
    cout << f << " " << l << "\n";

    string result = "";
    int i = 0;

    while (i < str.size())
    {
        if (i < l && i >= f)
        {
            // copy new substring when string to be removed is found
            result += newsubstr;
            i += substr.size();
        }
        else
        {
            result += str[i];
            i++;
        }
    }

    cout << result;
    return 0;
}