#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int compute(vector<int> &arr, int idx, int n)
{
    // base case
    if (2 * idx + 1 >= n)
        return arr[idx];

    // recursive case
    int l, r;
    l = compute(arr, 2 * idx + 1, n) * arr[idx];
    r = compute(arr, 2 * idx + 2, n) * arr[idx];
    return max(l, r);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int H;
        cin >> H;

        int n = pow(2, H) - 1;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << compute(arr, 0, n) << "\n";
    }
    return 0;
}