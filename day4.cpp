#include <iostream>
using namespace std;

// Write a program to identify of the a number is positive or negative

int main()
{
    int n;
    cin >> n;

    if (n > 0)
        cout << "positive";
    else if (n == 0)
        cout << "zero";
    else
        cout << "negative";

    return 0;
}