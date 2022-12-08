#include <iostream>
using namespace std;

// Write a program to Replace all 0’s with 1 in a given integer

int main()
{

    string n;
    string res = "";
    cin >> n;

    for (auto ch : n)
    {
        char c = (ch == '0') ? '1' : ch;
        res += c;
    }
    
    cout << res;

    return 0;
}