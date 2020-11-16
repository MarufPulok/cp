#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,n,p,q;
        cin>>x>>y>>n;
        p=n/x;
        q=(p*x)+y;
        if(q>n)
            q=q-x;
        cout<<q<<endl;
    }
}
