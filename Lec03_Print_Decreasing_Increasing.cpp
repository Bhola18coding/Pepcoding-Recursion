#include <bits/stdc++.h>
using namespace std;


//Decreasing Increasing  = mix
void pdi(int n)
{
    if(n==0)
    return;
    
    cout<<n<<endl;
    pdi(n-1);
    cout<<n<<endl;
}



int main()
{
    int n;
    cin>>n;
  pdi(n);
    return 0;
}