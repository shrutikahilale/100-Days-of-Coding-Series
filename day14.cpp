#include <iostream>
using namespace std;

// Write a program to reverse a given number

int revNumber(int n)
{
    int revn = 0;
    while (n)
    {
        revn = (revn * 10) + (n % 10);
        n /= 10;
    }

    return revn;
}

string revNumber(string n)
{
    string revNum = "";

    for (char ch : n)
    {
        revNum = ch + revNum;
    }

    return revNum;
}

int main()
{
    // way 1
    int number;
    cin >> number;
    cout << revNumber(number) << "\n";

    // way 2
    string num = to_string(number);
    cout << revNumber(num);

    return 0;
}