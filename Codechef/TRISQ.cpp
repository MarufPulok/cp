#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int lnt,ans=0;
        cin>>lnt;
        while(lnt>2)
        {
            ans=ans+(lnt-2)/2;
            lnt=lnt-2;
        }
        cout<<ans<<endl;
    }
    return 0;
}

