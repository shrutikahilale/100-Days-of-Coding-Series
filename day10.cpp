#include <iostream>
using namespace std;

// Write a program to find Factorial of a number

long long factorial(int n)
{
    // base case
    if (n <= 1)
        return 1;

    // recursive case
    return factorial(n - 1) * n;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);

    return 0;
}