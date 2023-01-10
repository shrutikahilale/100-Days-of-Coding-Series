#include <iostream>
using namespace std;
#define LOOP for (int i = 0; i < n; i++)

// Given 2 integer arrays X and Y of same size. Consider both arrays as vectors and print the sum of maximum scalar product (Dot product) of 2 vectors.

void sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int arr1[n], arr2[n];

    LOOP cin >> arr1[i];
    LOOP cin >> arr2[i];

    sort(arr1, n);
    sort(arr2, n);

    int maxScaProd = 0;

    LOOP maxScaProd += (arr1[i]*arr2[i]);

    cout<<maxScaProd;

    return 0;
}