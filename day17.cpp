#include <iostream>
using namespace std;

// Write a program to find the Factors of a number

void factors(int n)
{
    cout << "1, ";
    for (int i = 2; i < n; i++)
    {
        if (!(n % i))
            cout << i << ", ";
    }
    cout << n;
}

int main()
{

    int n;
    cin >> n;

    factors(n);

    return 0;
}