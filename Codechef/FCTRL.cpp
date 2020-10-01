#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x=1,y=0;
        cin>>n;
        while(n/x>0)
        {
            x*=5;
            y=y+(n/x);
        }
        cout<<y<<endl;
    }
    return 0;
}

