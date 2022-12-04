#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Write a program to identify if the number is Armstrong number or not

// get digits in the number
vector<int> getDigits(int n)
{
    vector<int> digits;

    while (n)
    {
        digits.push_back(n % 10);
        n /= 10;
    }
    return digits;
}

// get power raised to number of digits in a number
long power(int base, int exp)
{
    long ans = 1;

    for (int i = 1; i <= exp; i++)
        ans *= base;

    return ans;
}

// check if a number is armstrong or not
bool isArmstrong(int n)
{
    vector<int> digits = getDigits(n);

    int numdigits = log10(n) + 1;

    long sum = 0;

    for (auto i : digits)
    {
        long exp = power(i, numdigits);
        sum = sum + exp;
    }

    return sum == n;
}

int main()
{
    int n;
    cin >> n;

    string ans = isArmstrong(n) ? "Armstrong number" : "Not an armstrong number";
    cout << ans;

    return 0;
}