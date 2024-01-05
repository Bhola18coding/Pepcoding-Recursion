#include <bits/stdc++.h>
using namespace std;


//power
int power(int x, int n)
{
    
    if(n==0)
    return 1;
    
    
    int faith = power(x, n-1);
    int ExpAndFaith = x*faith;
    
    return ExpAndFaith;
}

int main()
{
    int x,n;
    cin>>x>>n;
     cout<<power(x,n)<<endl;
    return 0;
}
