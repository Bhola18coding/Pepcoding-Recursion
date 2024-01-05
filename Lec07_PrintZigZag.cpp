#include<bits/stdc++.h>
using namespace std;


void pritzigzag(int n)
{
    cout<<"pre"+n;
    pritzigzag(n-1);
    cout<<"In"+n;
    pritzigzag(n-1);
    cout<<"Post"+n;

}

int main()
{
    int n; 
    cin>>n;
    pritzigzag(n);

}