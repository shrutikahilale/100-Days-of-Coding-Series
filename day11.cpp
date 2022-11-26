#include <iostream>
using namespace std;

// Write a program to find Fibonacci series up to n

void fibonacci(int n)
{
    int a, b, c;
    a = 0;
    b = 1;

    while (n--)
    {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    cin >> n;

    fibonacci(n);

    return 0;
}