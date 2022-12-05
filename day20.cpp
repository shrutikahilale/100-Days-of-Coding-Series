#include <iostream>
#include <cmath>
using namespace std;

// Write a program to identify if the number is Prime number or not

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

int main()
{
    int n;
    cin >> n;

    string res = isPrime(n) ? "Prime number" : "Not a prime number";
    cout << res;

    return 0;
}
