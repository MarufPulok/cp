#include<bits/stdc++.h>
int main()
{
    int n,roots,i,test;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d",&n);
        roots=sqrt(n);
        printf("%d\n",roots);
    }
    return 0;
}

