#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x=__gcd(a,b);
        int ans=(a*b)/(x*x);
        cout<<ans<<endl;
    }
}
