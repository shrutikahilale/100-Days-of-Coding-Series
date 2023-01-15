#include <iostream>
using namespace std;

// Good Weather

// The weather report of Magicland is Good if the number of sunny days in a week is strictly greater than the number of rainy days.

// Given 7 integers A1,A2,A3,A4,A5,A6,A7 where Ai=1 denotes that the ith day of week in Magicland is a sunny day, Ai=0 denotes that the ith day in Magicland is a rainy day. Determine if the weather report of Magicland is Good or not.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        int s = 0, r = 0;

        for(int i=0;i<7;i++) {
            cin>>x;

            if(x==1) {
                s++;
            }
            else {
                r++;
            }
        }

        if(s>r) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}