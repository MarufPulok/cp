#include<bits/stdc++.h>
int main()
{
    long int n,a,b,i;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld%ld",&a,&b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}

