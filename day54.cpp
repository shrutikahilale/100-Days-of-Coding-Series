#include <iostream>
#include <unordered_map>
using namespace std;
#define loop1 for (int i = 0; i < n; i++)
#define loop2 for (int i = 0; i < m; i++)

// Given an integer array of size N. Write Program to find whether Arrays are disjoint or not. Two arrays are said to be disjoint if they have no elements in common.

int main()
{
    int n, m;

    cin >> n;
    int arr1[n];
    loop1 cin >> arr1[i];

    cin >> m;
    int arr2[m];
    loop2 cin >> arr2[i];

    unordered_map<int, int> mp;
    loop1 mp[arr1[i]]++;
    loop2 mp[arr2[i]]--;

    bool isDisjoint = true;
    for (auto itr : mp)
    {
        if (itr.second == 0)
        {
            isDisjoint = false;
            break;
        }
    }

    if (isDisjoint)
        cout << "Disjoint";
    else
        cout << "Not disjoint";

    return 0;
}