#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Write a program to express a number as a sum of two prime numbers
// eg: 4 as 2 + 2
// eg: 5 as 2 + 3
// eg: 6 as 3 + 3

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

bool primeNums(int n)
{
    // vector<int> primes;

    for (int i = 2; i < n; i++)
    {
        if (isPrime(i) && isPrime(n - i))
        {
            cout << i << " + " << (n - i) << " = " << n;
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    if (!primeNums(n))
        cout << n << " cannot be represented as sum of 2 prime numbers";

    return 0;
}