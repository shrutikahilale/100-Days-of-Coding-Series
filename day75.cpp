#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (n % k == 0)
            cout << (n / k) << "\n";
        else
            cout << "-1\n";
    }

    return 0;
}