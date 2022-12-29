#include <iostream>
#include <unordered_map>
using namespace std;

// Write Program to check if two arrays are the same or not

int main()
{
    int n1, n2;

    cout << "enter size of array1 : ";
    cin >> n1;
    cout << "enter size of array2 : ";
    cin >> n2;

    int arr1[n1];
    int arr2[n2];

    cout << "enter array1 : ";

    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "enter array2 : ";

    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    unordered_map<int, int> mp;
    for (int i = 0; i < n1; i++)
        mp[arr1[i]]++;

    for (int i = 0; i < n1; i++)
        mp[arr2[i]]--;

    bool fl = true;

    for (auto itr : mp)
    {
        if (itr.second > 0)
        {
            fl = false;
            break;
        }
    }

    if (fl)
        cout << "same";
    else
        cout << "not same";

    return 0;
}