#include<bits/stdc++.h>
int main()
{
    long long int t,n,i,a,d=0;
    scanf("%lld%lld",&t,&n);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&a);
        if(a%n==0)
        {
            d=d+1;
        }
    }
    printf("%lld",d);
    return 0;
}

