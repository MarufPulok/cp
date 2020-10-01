#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,x=0,n0,nP;
        scanf("%d",&n);
        x=x+n/100;
        n=n0;
        x=x+n/50;
        n=nP;
        x=x+n/10;
        n=n;
        x=x+n/5;
        n=n%5;
        x=x+n/2;
        n=n%2;
        x=x+n;
        printf("%d\n",x);
    }
    return 0;
}
