#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s1,s2;
        int n,k;
        cin>>n>>k;
        cin>>s1;
        s2=s1;
        reverse(s2.begin(),s2.end());
        if(s1==s2||k==0)
        {
            cout<<1<<endl;
        }
        else
        cout<<2<<endl;

    }
    
}