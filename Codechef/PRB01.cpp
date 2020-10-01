#include<bits/stdc++.h>
int main()
{
    int t,i,n,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int c=0;
        scanf("%d",&n);
        for(j=2; j<=n/2; j++)
        {
            if((n%j)==0)
            {
                c=1;
                break;
            }
        }
        if(c==1)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}

