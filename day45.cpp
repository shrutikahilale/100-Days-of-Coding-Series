#include <iostream>
using namespace std;

// Write Program to find smallest and largest element in an array

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int min_, max_;
    min_ = arr[0];
    max_ = arr[0];

    for (int i = 0; i < n; i++)
    {
        min_ = min(min_, arr[i]);
        max_ = max(max_, arr[i]);
    }

    cout << "Smallest element: " << min_;
    cout << "\nLargest element: " << max_;

    return 0;
}