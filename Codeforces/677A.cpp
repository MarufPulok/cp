#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,w=0,f;
    cin>>n>>h;
    for(int i=1;i<=n;i++)
    {
        cin>>f;
        if(f>h)
            w+=2;
        else
            w++;
    }
    cout<<w;
    return 0;

}

