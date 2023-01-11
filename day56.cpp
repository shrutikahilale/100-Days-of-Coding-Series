#include <iostream>
using namespace std;

// Write Program to find whether the numbers of an array be made equal

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // it is always possible to make array elements equal to some LCM
    // unless and until any condition is given

    // for eg1:
    // 50, 75, 150 can be made equal to 150, because the LCM of 50 75 and 150 is 150

    // for eg2:
    // 23, 37 can be made equal to (23*37), because it is the LCM of 23 and 37

    cout << "Yes";

    return 0;
}