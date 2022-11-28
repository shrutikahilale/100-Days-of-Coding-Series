#include<iostream>
using namespace std;

// Write a program to find Sum of N natural numbers

int main() {

    int n;
    cin>>n;

    if(n<=0) {
        cout<<"n is not a natural number";
        exit(0);
    }

    // with for loop 
    long long sum = 0;
    for(int i=1;i<=n;i++) sum += i;

    cout<<"With for loop: "<<sum<<"\n";
    // without for loop

    sum = (n+1)*n/2;
    cout<<"With formula: "<<sum<<"\n";

    return 0;
}