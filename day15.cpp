#include <iostream>
#include <vector>
using namespace std;

// Write a program to identify if the number is Strong number or not

// Get a number as input from user and then check whether that number is a strong number or not. A number is said to be strong number if the sum of the factorial of each digit in the number is same as that of the number.

vector<int> getDigits(int n)
{
    vector<int> res;

    while (n)
    {
        res.push_back(n % 10);
        n /= 10;
    }

    return res;
}

long long factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{

    int n;
    cin >> n;

    // O(logn)
    vector<int> digits = getDigits(n);

    long long sumFact = 0;

    // O(n*n)
    for (auto i : digits)
        sumFact += factorial(i);

    if (sumFact == n)
        cout << "Given number is a strong number";

    else
        cout << "Given number isn't a strong number";

    return 0;
}