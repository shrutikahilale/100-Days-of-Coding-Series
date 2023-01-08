#include <iostream>
using namespace std;

//  Given an integer array of size N. Write Program to find maximum product subarray in a given array.

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // brute force:
    int maxi = INT16_MIN;
    int prod = 1;

    for (int i = 0; i < n; i++)
    {
        prod = 1;

        for (int j = i; j < n; j++)
        {
            prod = prod * arr[j];
            maxi = max(prod, maxi);
        }
    }
    cout << "Brute force: " << maxi << "\n";

    // TC: O(n2), SC:O(1)

    // optimized: separate track of negative product and positive product
    int maxP = 1, minP = 1, best = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(maxP, minP);
        }
        maxP = max(maxP, maxP * arr[i]);
        minP = min(minP, minP * arr[i]);

        best = max(maxP, best);
    }

    cout << "Optimized: " << best;

    // TC: O(n), SC:O(1)

    return 0;
}