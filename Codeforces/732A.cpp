#include<stdio.h>
int main()
{
    int a,b,n,x;
    scanf("%d%d",&a,&b);
    for(x=1; ; x++)
    {

        if(((a*x)%10==b)||((a*x)%10==0))
            break;
    }
    printf("%d",x);

    return 0;
}
