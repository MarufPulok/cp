#include <bits/stdc++.h>
int main()
{
    int i,j,a,b,d=1,n,m,lim=0;
    int k[1000000];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        lim=lim+a;
        while(d<=lim)
        {
            k[d]=i;
            d=d+1;
        }
    }
    scanf("%d",&m);
    for(j=1; j<=m; j++)
    {
        scanf("%d",&b);
        printf("%d\n",k[b]);
    }
    return 0;
}
