#include<bits/stdc++.h>
int main()
{
    int test,n,i;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d",&n);
        if(n>=10)
        {
            printf("-1\n");
        }
        else
        {
            printf("What an obedient servant you are!\n");
        }
    }
    return 0;
}

