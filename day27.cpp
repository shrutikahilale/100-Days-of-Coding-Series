#include <iostream>

// Write a program to find the double of the given number without using arithmetic operator

int main()
{
    int n;
    std::cin >> n;

    // used left shift operator
    n = n << 1;
    std::cout << n;

    return 0;
}