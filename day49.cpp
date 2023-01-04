#include <iostream>
using namespace std;
#define LOOP for (int i = 0; i < n; i++)

// Given 2 integer arrays X and Y of same size. Consider both arrays as vectors and print the minimum scalar product (Dot product) of 2 vectors.

void sortArray(int *arr, int n)
{
    int min_;

    for (int i = 0; i < n - 1; i++)
    {
        min_ = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_])
            {
                min_ = j;
            }
        }

        if (min_ != i)
        {
            swap(arr[min_], arr[i]);
        }
    }
}

void rev(int *arr, int n)
{
    int i = 0, j = n - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int n;
    cin >> n;

    int arr1[n], arr2[n];

    LOOP cin >> arr1[i];
    LOOP cin >> arr2[i];

    sortArray(arr1, n);
    sortArray(arr2, n);
    rev(arr2, n);

    int scalar = 0;

    LOOP scalar += (arr1[i] * arr2[i]);

    cout<<scalar;

    return 0;
}