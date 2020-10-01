#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100001],i;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        for(i=1; i<=n; i++)
            cin>>a[i];
        for(i=1; i<=n; i++)
        {
            if(a[a[i]]!=i)
            {
                cout<<"not ambiguous"<<endl;
                break;
            }
            if(i==n)
                cout<<"ambiguous"<<endl;
        }
    }
    return 0;
}


