#include <iostream>
using namespace std;

// Write a program to calculate maximum number of handshakes

int main()
{
    int n;
    cin >> n;

    int hand_shakes = ((n * n) - n) / 2;
    cout << hand_shakes;

    return 0;
}