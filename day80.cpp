#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        unordered_map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            map[arr[i]]++;
        }

        bool fl = true;
        for (auto it : map)
        {
            if (it.second % 2 != 0)
            {
                fl = false;
                break;
            }
        }

        if (fl)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}