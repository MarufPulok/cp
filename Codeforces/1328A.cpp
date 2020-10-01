#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,flag;
        cin>>a>>b;
        if(a%b==0)
            cout<<0<<endl;
        else if(a>b)
        {
           flag=a/b;
           cout<<(b*(flag+1))-a<<endl;
        }
        else
            cout<<b-a<<endl;
    }
    return 0;
}

