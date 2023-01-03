#include <iostream>
#include <map>
using namespace std;

// Write a program to remove duplicates from an array

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        if (freq.find(arr[i]) != freq.end())
            arr[i] = -1;

        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
            cout << arr[i] << " ";
    }

    // I used ordered map because search time is faster than unordered map
    // search time: O(logn), insertion time: O(logn) + rebalance time

    return 0;
}