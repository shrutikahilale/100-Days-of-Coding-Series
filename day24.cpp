#include <iostream>
using namespace std;

// Write a program to print Pyramid pattern using stars

void drawPyramid(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        for(int j=0;j<=i;j++) {
            cout<<"* ";
        }
        for(int j=0;j<n-i-2;j++) {
            cout<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int n;
    cin>>n;

    drawPyramid(n);

    return 0;
}