#include <iostream>
using namespace std;

/*
Bucket Filling

Nejiya has a bucket having a capacity of K liters. It is already filled with X liters of water.

Find the maximum amount of extra water in liters that Nejiya can fill in the bucket without overflowing.
*/

int main()
{
    int t;
    cin >> t;

    int k, x;

    while (t--)
    {
        cin >> k >> x;

        if (k < x)
            cout << "invalid\n";
        else
            cout << (k - x) << "\n";
    }
    
    return 0;
}