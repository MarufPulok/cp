#include<bits/stdc++.h>
int main()
{
    int t,a,b,c,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a+b+c)==180)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

