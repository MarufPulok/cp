#include<bits/stdc++.h>
int main()
{
    int a,b,test,i;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",a%b);
    }
    return 0;
}

