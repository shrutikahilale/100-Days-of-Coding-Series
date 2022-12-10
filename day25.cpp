#include <iostream>
using namespace std;

// Write a program to find Area of a circle

int main()
{
    double radius;
    cin >> radius;

    if (radius < 0)
    {
        cout << "negative radius";
        exit(0);
    }

    double area = 3.14 * radius * radius;
    cout << area;

    return 0;
}