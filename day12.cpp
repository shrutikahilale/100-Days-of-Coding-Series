#include <iostream>
using namespace std;

long sumOfDigits(int n)
{

    long sum = 0;

    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    cout << sumOfDigits(n);

    return 0;
}