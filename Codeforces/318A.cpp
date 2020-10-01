#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,p,ans;
    cin>>n>>k;
    if(n%2==0)
        p=n/2;
    else
        p=(n/2)+1;
    if(k<=p)
        ans=2*k-1;
    else
        ans=(k-p)*2;
        cout<<ans;
    return 0;
}

