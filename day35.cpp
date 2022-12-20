//  Write a Program to Count the sum of numbers in a string
#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "enter string: ";
    getline(cin, s);

    int sum = 0;

    for (char c : s)
    {
        if (c >= 48 && c <= 57)
        {
            sum += (int(c) - 48);
        }
    }
    cout << sum;

    return 0;
}