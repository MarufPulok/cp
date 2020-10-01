#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int p,d,b,prc=0,borrow;
    scanf("%lld%lld%lld",&p,&d,&b);
    for(int i=1;i<=b;i++)
    {
        prc=prc+(i*p);
    }
    borrow=prc-d;
    if(prc-d<=0)
        printf("0");
    else
    printf("%lld",prc-d);
    return 0;
}

