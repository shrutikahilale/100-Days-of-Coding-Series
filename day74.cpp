#include <iostream>
#include <vector>
using namespace std;

int countMinTiles(vector<vector<int>> arr, int n, int m)
{
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = 0; j <= m - 2; j++)
        {
            if (arr[i][j] != 1)
            {
                arr[i][j] = 1;
                arr[i + 1][j] = 1;
                arr[i][j + 1] = 1;
                arr[i + 1][j + 1] = 1;
            }
        }
    }

    // cout << "Array: \n";

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    int countEmpty = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                countEmpty++;
            }
        }
    }

    return countEmpty;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        // array containing n vectors of size m
        vector<vector<int>> arr(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = 0;
            }
        }

        cout << countMinTiles(arr, n, m) << "\n";
    }

    return 0;
}