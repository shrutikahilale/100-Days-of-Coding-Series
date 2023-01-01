#include <iostream>
using namespace std;

// Write Program to find sum of elements of an array

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of elements: " << sum;

    return 0;
}