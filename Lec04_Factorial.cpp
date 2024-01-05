
#include <bits/stdc++.h>
using namespace std;


//factorial 
int fact(int n)
{
    
    if(n==0)
    return 1;
    
    
    int faith = fact(n-1);
    int ExpAndFaith = n*faith;
    
    return ExpAndFaith;
}

int main()
{
    int n;
    cin>>n;
     cout<<fact(n)<<endl;
    return 0;
}
