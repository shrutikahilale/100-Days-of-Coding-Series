#include <iostream>
#include <cmath>
using namespace std;

// Write a program to find Number of digits in an integer

int numDigits(int n)
{
    if (n == 0)
        return 1;

    int count = 0;

    while (n)
    {
        count += 1;
        n /= 10;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    // approach 1
    cout << numDigits(n) << endl;

    // approach 2
    int numDigits;

    if (n > 0)
        numDigits = log10(n) + 1;
    else if (n < 0)
    {
        n = n * -1;
        numDigits = log10(n) + 1;
    }
    else
        numDigits = 1;

    cout << numDigits;

    return 0;
}