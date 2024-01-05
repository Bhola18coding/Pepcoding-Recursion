#include <bits/stdc++.h>
using namespace std;

void printarr(vector<int>&arr, int idx)
{
    
    if(idx==arr.size())
    {
        return;
    }
    
    cout<<arr[idx]<< " ";
    printarr(arr, idx+1);
    
}

int main()
{
    vector<int>arr={1,2,3,4};
    int idx =0;
    printarr(arr, idx);
    return 0;
}
