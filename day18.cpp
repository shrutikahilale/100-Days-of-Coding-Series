#include <iostream>
#include <vector>
using namespace std;

// Write a program to add two fractions

int main()
{

    int n1, d1, n2, d2;

    cin >> n1 >> d1 >> n2 >> d2;

    int sn = (n1 * d2) + (n2 * d1);
    int sd = d1 * d2;

    if (sn % sd == 0)
    {
        sn = sn / sd;
        sd = 1;
    }
    else if (sd % sn == 0)
    {
        sd = sd / sn;
        sn = 1;
    }

    cout << sn << "/" << sd;

    return 0;
}