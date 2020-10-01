#include<stdio.h>
int main ()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if (n>m*2)
    {
        printf ("%d",m);
    }
    else if (m>n*2)
    {
        printf ("%d",n);
    }
    else
    {
        printf ("%d",(n+m)/3);
    }
}
