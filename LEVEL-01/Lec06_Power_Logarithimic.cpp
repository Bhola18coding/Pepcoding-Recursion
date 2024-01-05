#include<bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    if(n==0)
    return 1;

    int faith = power(x, n-1);
    int expandfaith = x*faith;
    return expandfaith;
}

int main()
{
    int n; // power
    int x; // integer
    cin>>n>>x;
    cout<<power(x, n);

}