#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n-1;j++)
    {
       if((arr[j]==10&&arr[j+1]==1)||arr[j]==1&&arr[j+1]==10)
        p++;
    }
    cout<<p+1;
    return 0;
}

