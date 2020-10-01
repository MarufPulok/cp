#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=0,count=1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            if(count>max)
            {
                max=count;
            }
            count=1;
        }
        else
            count++;
    }
    if(count>max)
        max=count;
    cout<<max;
    return 0;
}

