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
        int n, k, c;
        cin >> n >> k >> c;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int countSteps = 0;

        int i = 0;

        while (i < arr.size())
        {
            int l = i + 1, m;
            int idx = i;

            vector<int> temp;

            for (int j = 0; j < k - 1; j++)
            {
                if (l != (i + 1))
                {
                    l = l + 1;
                    idx = l;
                }
                m = arr.size() - 1;
                int condition = arr[idx] * c;

                while (l < m)
                {
                    int mid = l + (m - l) / 2;

                    if (arr[mid] >= condition)
                    {
                        m = mid;
                    }
                    else
                    {
                        l = mid + 1;
                    }
                }

                if (arr[l] >= condition)
                {
                    temp.push_back(l);
                }
            }

            if (temp.size() == k - 1)
            {
                temp.push_back(arr[i]);
                countSteps++;

                // remove those elements
                // cout << "remove elements: \n";
                for (int j = 0; j < k; j++)
                {
                    arr.erase(arr.begin() + temp[j] - j);
                    // cout << arr.size() << "\n";
                }
            }

            // cout << "temp: \n";
            // for (int j = 0; j < temp.size(); j++)
            // {
            //     cout << temp[j] << " ";
            // }
            // cout << "\n";

            i++;
        }

        cout << countSteps << "\n";
    }

    return 0;
}
