#include <bits/stdc++.h>
using namespace std;

void printDecreasing(int n)
{
    if(n==0)
    {
        return;
    }
    
    cout<<n<<" ";
    printDecreasing(n-1);
}




int main()
{
    int n;
    cin>>n;
   printDecreasing(n);
    return 0;
}
