#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // strategy: (max-min)*(max-1) : given that max-1 is not equal to max
        // O(nlogn) solution

        sort(arr.begin(), arr.end(), greater<int>());

        int maxi, midi, mini;
        maxi = arr[0];
        mini = arr[n - 1];
        midi = arr[1];

        // cout << maxi << "\n"
        //      << mini << "\n";

        int ans = (maxi - mini) * midi;
        cout << ans << "\n";
    }

    return 0;
}