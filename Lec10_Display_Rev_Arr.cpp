#include <bits/stdc++.h>
using namespace std;

void printRevarr(vector<int>&arr, int idx)
{
    //Base Case
    if(idx==arr.size())
    {
        return;
    }
    
 
    printRevarr(arr, idx+1);
    cout<<arr[idx]<< " ";
}

int main()
{
    vector<int>arr={1,2,3,4};
    int idx =0;
    printRevarr(arr, idx);
    return 0;
}
