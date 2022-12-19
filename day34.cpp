#include <iostream>
using namespace std;

// Write a Program to Remove brackets from an algebraic expression

int main()
{
    string s;
    getline(cin, s);

    string res = "";

    for (char c : s)
    {
        if (c == ')' || c == '(')
            continue;
        res += c;
    }

    cout << res;

    return 0;
}