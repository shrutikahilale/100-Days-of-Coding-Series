#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int w1, w2, x1, x2, M;
        cin >> w1 >> w2 >> x1 >> x2 >> M;

        x1 = x1 * M;
        x2 = x2 * M;

        int increase = w2 - w1;

        if (increase <= x2 && increase >= x1)
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }

    return 0;
}