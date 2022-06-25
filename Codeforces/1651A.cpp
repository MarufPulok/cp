#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long ans=1;
        for(int i=1;i<=n;i++)
        {
            ans*=2;
        }

        cout<<ans-1<<endl;
    }
}