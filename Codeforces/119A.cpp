#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,x;
    cin>>a>>b>>n;
    while(1)
    {
        n=n-__gcd(a,n);
        if(n==0)
        {
            x=0;
            break;
        }
        n=n-__gcd(b,n);
        if(n==0)
        {
            x=1;
            break;
        }
    }
    cout<<x;
    return 0;
}

