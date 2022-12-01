#include <iostream>
using namespace std;

// Write a program to identify if the number is Perfect number or not

bool isPerfect(int n)
{
    long sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return sum == n;
}

int main()
{

    int n;
    cin >> n;

    if (isPerfect(n))
        cout << "Perfect number";
    else
        cout << "Not a perfect number";

    return 0;
}