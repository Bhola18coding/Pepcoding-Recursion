#include <bits/stdc++.h>
using namespace std;


//Increasing from 1 to n 
void printIncreasing(int n)
{
    if(n==0)
    return;
    
    
    printIncreasing(n-1);
    cout<<n<<" ";
}



int main()
{
    int n;
    cin>>n;
   printIncreasing(n);
    return 0;
}
