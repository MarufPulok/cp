#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long a,b,c,x,y,z;
        cin>>a>>b>>c;

        x=max(a,max(b,c)+1);

        y=max(b,max(a,c)+1);

        z=max(c,max(a,b)+1);


        cout<<x-a<<" "<<y-b<<" "<<z-c<<" "<<endl;
    }
}
