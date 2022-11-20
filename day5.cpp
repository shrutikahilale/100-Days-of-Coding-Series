#include <iostream>
using namespace std;

//  Write a program to identify if the number is even or odd

int main()
{
    int n;
    cin >> n;

    if (n % 2)
        cout << "odd";
    else
        cout << "even";

    return 0;
}