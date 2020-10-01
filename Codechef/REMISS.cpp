#include<bits/stdc++.h>
int main()
{
    int test,i,a,b,swap;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            swap=a;
            a=b;
            b=swap;
        }
        printf("%d %d\n",b,a+b);
    }
    return 0;
}

