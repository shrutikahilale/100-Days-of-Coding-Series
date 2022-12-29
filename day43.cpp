#include <iostream>
using namespace std;

// Write Program to find the array type

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool iseven, isodd;
    iseven = isodd = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2)
            iseven = true;
        else
            isodd = true;
    }

    if (iseven && isodd)
        cout << "mixed";
    else if (iseven)
        cout << "even";
    else
        cout << "odd";

    return 0;
}