#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max=0,x=0,y=0;
        cin>>n;
        int l[n],r[n],lr[n];
        for(int i=0; i<n; i++)
            cin>>l[i];
        for(int i=0; i<n; i++)
        {
            cin>>r[i];
            lr[i]=l[i]*r[i];
            if ( lr[i] > max )
            {
                max = lr[i];
                x = r[i];
                y = i;
            }
            else if ( lr[i] == max && r[i] > x )
            {
                x = r[i];
                y = i;
            }

        }
        cout<<y+1<<endl;

    }
}
