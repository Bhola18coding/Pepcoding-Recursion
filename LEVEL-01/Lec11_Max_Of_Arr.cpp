#include <bits/stdc++.h>
using namespace std;

int max (vector<int>&arr, int idx)
{
    //Base Case 
    if(idx==arr.size()-1)
    {
        return arr[idx];
    }
    
    //Faith
    int F = max(arr, idx+1);

    //Faith meet Expectation
    if(arr[idx]>F)
    {
        return arr[idx];
    }
    else 
    {
        return F;
    }
}


int main()
{
    vector<int>arr = {10,2,39,28,76,89};
    int idx =0;
    cout<<max(arr, idx);
}
