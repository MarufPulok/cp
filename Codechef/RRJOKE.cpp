#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a>>b;
        if(n%4==0)
            cout<<n<<endl;
        else if(n%4==1)
            cout<<1<<endl;
        else if(n%4==2)
            cout<<n+1<<endl;
        else
            cout<<0<<endl;

    }
}
