#include <bits/stdc++.h>
using namespace std;

int firstIndex (vector<int>arr, int idx, int x)
{
    
    //Base Case
    if(idx==arr.size())
    {
        return -1;
    }
    
    if(arr[idx]==x)
    {
        return idx;
    }
    else 
    {
        int firstInSmall = firstIndex(arr, idx+1, x);
        return firstInSmall;
    }
}

int main() {
     vector<int>arr ={1,2,3,4,1,2,3};
     int i =0;
     int x = 3;
     cout<<firstIndex(arr, i, x);
    return 0;
}