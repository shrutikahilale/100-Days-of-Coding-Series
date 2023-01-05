#include <iostream>
#define loop for (int i = 0; i < n; i++)
using namespace std;

// Given an integer array of size n. Write program to find sum of positive square elements in the array.

int main()
{
    int n;
    cin >> n;

    int arr[n];
    loop cin >> arr[i];

    int sumsq = 0;
    loop sumsq += (arr[i] * arr[i]);

    cout << sumsq;

    return 0;
}