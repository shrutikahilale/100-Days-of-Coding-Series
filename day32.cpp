#include <iostream>
using namespace std;

// Write a Program to Remove vowels from a string

int main()
{
    string s;
    cout << "enter string: ";
    cin >> s;

    string res = "";

    for (auto C : s)
    {
        char c = tolower(C);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            continue;
        }

        res += C;
    }
    cout << res << endl;

    return 0;
}