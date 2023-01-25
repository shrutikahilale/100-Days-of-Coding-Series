#include <iostream>
using namespace std;

class Isosceles
{
public:
    Isosceles()
    {
        cout << "I am an isosceles triangle\n";
    }
};

class Equilateral : Isosceles
{
public:
    Equilateral()
    {
        cout << "I am an equilateral triangle\n";
    }
};

class Triangle : Equilateral
{
public:
    Triangle()
    {
        cout << "I am a triangle\n";
    }
};

int main()
{
    Triangle t1;
    return 0;
}