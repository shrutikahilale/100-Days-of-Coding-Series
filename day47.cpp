#include <iostream>
using namespace std;

// Write Program to find longest palindrome in an array

bool isPalindrome(string s)
{
    int i = 0, j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }

    return true;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    string arr[n];
    cout << "Enter elements in array: ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int len = 0, idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (isPalindrome(arr[i]))
        {
            int size = arr[i].length();
            if (size > len)
            {
                len = size;
                idx = i;
            }
        }
    }

    if (idx != -1)
    {
        cout << arr[idx];
    }
    else
    {
        cout << "no palindrome exists";
    }

    return 0;
}