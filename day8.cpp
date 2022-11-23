#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

// Write a program to find roots of a quadratic equation

pair<double, double> findRealRoots(int a, int b, int c, int d)
{
    auto r1 = ((b * -1) + (sqrt(d))) / (2 * a);
    auto r2 = ((b * -1) - (sqrt(d))) / (2 * a);

    return {r1, r2};
}
pair<complex<double>, complex<double>> findCompRoots(int a, int b, int c, int d)
{
    d = d * -1;
    complex<double> r1(double(-1 * b) / (2 * a), sqrt(d) / (2 * a));
    complex<double> r2(double(-1 * b) / (2 * a), -1 * sqrt(d) / (2 * a));

    return {r1, r2};
}

int main()
{
    int a, b, c;
    cout << "Enter values of a, b, c: ";
    cin >> a >> b >> c;

    auto d = (b * b) - (4 * a * c);

    if (d < 0)
    {
        pair<complex<double>, complex<double>> roots = findCompRoots(a, b, c, d);
        cout << "Roots are complex\n";
        cout << "Root1: " << real(roots.first) << " + ( " << imag(roots.first) << " ) i"
             << "\nRoot2: " << real(roots.second) << " + ( " << imag(roots.second) << " ) i";
    }
    else
    {
        pair<double, double> roots = findRealRoots(a, b, c, d);

        if (d == 0)
            cout
                << "Roots are equal\n";
        else
            cout << "Roots are unique\n";
        cout << "Root1: " << roots.first << "\nRoot2: " << roots.second;
    }

    return 0;
}