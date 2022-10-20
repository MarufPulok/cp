#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;

        vector <long> v(n);
        for(long i=0;i<n;i++)
        {
            cin>>v[i];
        }

        if(is_sorted(v.begin(),v.end()))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}