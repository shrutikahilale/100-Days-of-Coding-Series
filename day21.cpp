#include <iostream>
using namespace std;

// Write a program to identify if the number is Palindrome or not

bool isNumPalindrome(string n)
{
    int s = n.size();
    
    for (int i = 0; i <= s / 2; i++)
    {
        if (n[i] != n[s - i - 1])
            return false;
    }

    return true;
}

int main()
{
    string number;
    cin >> number;

    string res = isNumPalindrome(number) ? "Palindrome" : "Not a palindrome";
    cout << res;

    return 0;
}