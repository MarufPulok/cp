#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sol=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a[3],count=0;
        for(int j=0;j<3;j++)
        {
            cin>>a[j];
            if(a[j]==1)
                count++;
        }
        if(count>=2)
            sol++;
    }
    printf("%d",sol);
    return 0;
}
