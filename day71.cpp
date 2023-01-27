#include <iostream>
#include <unordered_map>
using namespace std;

int compute(int *arr, int n, int i, int marks, unordered_map<int, int> &memo)
{
    if (memo.find(marks) == memo.end())
    {
        int lessEqual = 0, greater = 0;

        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                if (arr[j] <= arr[i])
                {
                    lessEqual++;
                }
                else
                {
                    greater++;
                }
            }
        }

        if (lessEqual > greater)
        {
            memo[marks] = 1;
        }
        else
        {
            memo[marks] = 0;
        }
    }

    return memo[marks];
}

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
        {
            cin >> arr[i];
        }
        unordered_map<int, int> memo;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans = ans + compute(arr, n, i, arr[i], memo);
        }

        cout << ans << "\n";
    }

    return 0;
}