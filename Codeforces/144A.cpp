#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=0,min=1000,max_idx=0,min_idx=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]>max)
        {
            max=a[i];
            max_idx=i;
        }
        if (a[i]<=min)
        {
            min=a[i];
            min_idx=i;
        }
    }

    if (max_idx>min_idx)
    {
        cout<<max_idx+n-1-min_idx-1;
    }
    else
    {
        cout<<max_idx+n-1-min_idx;
    }
}