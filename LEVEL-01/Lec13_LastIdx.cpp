#include <bits/stdc++.h>
using namespace std;


int lastIdx(vector<int>&arr, int i, int x)
{
    int n = arr.size();
    
    //Base Case
    if(i==-1)
    {
        return -1;
    }
    
    if(arr[i]==x)
    {
        return i;
    }
    
    else 
    {
        int ans = lastIdx(arr, i-1, x);
        return ans;
    }
}


int main() {
    // Write C++ code here
   vector<int>arr = {1,2,3,4,5,2,5};
   int i = arr.size()-1;
   int x = 1;
   cout<<lastIdx(arr, i, x);
    return 0;
}