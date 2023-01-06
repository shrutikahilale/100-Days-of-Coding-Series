#include <iostream>
#define LOOP for (int i = 0; i < n; i++)
using namespace std;

// Given an integer array of size N, write a program to sort the array;

void print(int *arr, int n);
void bubblesort(int arr[], int n);
void selectionsort(int arr[], int n);
void insertionsort(int arr[], int n);
void quicksort(int *arr, int n, int s, int e);
int partition(int *arr, int n, int s, int e);

int main()
{

    while (true)
    {
        int n;
        cout << "Enter array size: ";
        cin >> n;

        int arr[n];
        cout << "Enter array elements: ";
        LOOP cin >> arr[i];

        int choice;
        cout << "1. Bubble sort\n2. Selection sort\n3. Insertion sort\n4. Quicksort\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bubblesort(arr, n);
            break;
        case 2:
            selectionsort(arr, n);
            break;
        case 3:
            insertionsort(arr, n);
            break;
        case 4:
            quicksort(arr, n, 0, n - 1);
            print(arr, n);
            break;

        default:
            break;
        }

        int c;
        cout << "Do your want to continue? 1/0: ";
        cin >> c;
        if (c == 0)
            break;
    }

    return 0;
}

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    print(arr, n);
}

void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int idx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[idx])
            {
                idx = j;
            }
        }

        if (idx != i)
        {
            swap(arr[idx], arr[i]);
        }
    }

    print(arr, n);
}

void insertionsort(int arr[], int n)
{
    // 2 4 1 3 6 5

    // 2 | 4 1 3 6 5
    // 2 4 | 1 3 6 5
    // 1 2 4 | 3 6 5
    // 1 2 3 4 | 6 5
    // 1 2 3 4 6 | 5
    // 1 2 3 4 5 6 |

    for (int i = 1; i < n; i++)
    {
        int idx = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                idx = j + 1;
            }
            else
                break;
        }

        int temp = arr[i];
        int correctPos = idx;
        idx = i;

        while (idx >= correctPos && idx > 0)
        {
            arr[idx] = arr[idx - 1];
            idx--;
        }

        arr[correctPos] = temp;
    }

    print(arr, n);
}

int partition(int *arr, int n, int s, int e)
{
    int i = -1;
    int pivot = arr[e];

    for (int j = s; j < e; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // correct position will be i+1;
    i++;
    swap(arr[i], arr[e]);
    return i;
}

void quicksort(int *arr, int n, int s, int e)
{
    if (s < e)
    {
        int pidx = partition(arr, n, s, e);
        quicksort(arr, n, s, pidx - 1);
        quicksort(arr, n, pidx + 1, e);
    }
}

void print(int *arr, int n)
{
    LOOP cout << arr[i] << " ";
    cout << "\n";
}