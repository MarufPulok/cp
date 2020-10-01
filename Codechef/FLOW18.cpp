#include<bits/stdc++.h>
int main()
{
    int test,n,i,j;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        int fact=1;
        scanf("%d",&n);
        for(j=2;j<=n;j++)
        {
            fact=fact*j;
        }
        printf("%d\n",fact);

    }
    return 0;
}

