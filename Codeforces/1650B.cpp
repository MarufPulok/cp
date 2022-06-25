#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r,a,x,ans1,ans2;
        cin>>l>>r>>a;

        if(a==1)
        {
            cout<<r<<endl;
            continue;
        }

        if(r%a==0)
        {
            if(l==r)
            x=r;
            else
            x=r-1;

        }
        else
        {
            if(r-(r%a)-1>=l)
            x=r-(r%a)-1;
            else
            x=r;
        }

        ans1=(x/a)+(x%a);
        ans2=(r/a)+(r%a);

        cout<<max(ans1,ans2)<<endl;
    }
}