#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        if(m%2!=0&&n%2!=0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
