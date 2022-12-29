#include <iostream>
using namespace std;

// Write a program to count number of even and odd numbers in an array

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int even, odd;
    even = odd = 0;

    for (auto i : arr)
    {
        if (i % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Number of even numbers: " << even << "\nNumber of odd numbers: " << odd;

    return 0;
}