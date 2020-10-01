#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r=0,g=0,b=0,a[3];
        cin>>n;
        char s[n];
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            if(s[i]=='R')
                r++;
            if(s[i]=='G')
                g++;
            if(s[i]=='B')
                b++;
        }
        a[0]=r;
        a[1]=g;
        a[2]=b;
        sort(a,a+3);
        cout<<n-a[2]<<endl;
    }
}

