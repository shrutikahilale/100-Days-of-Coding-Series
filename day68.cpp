#include <iostream>
#include <set>
using namespace std;

int main()
{
    int q;
    cin >> q;

    int action, n;
    set<int> s;

    while (q--)
    {
        cin >> action >> n;

        if (action == 1)
        {
            s.insert(n);
        }
        else if (action == 2)
        {
            s.erase(n);
        }
        else
        {
            if (s.find(n) != s.end())
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}