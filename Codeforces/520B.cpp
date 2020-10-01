#include<bits/stdc++.h>
int main()
{
    int b,a;
    int c=0;
    scanf("%d%d",&b,&a);
    while(a!=b)
    {
        if(a>b && a%2==0)
            a=a/2;
        else
            a++;
        c++;
    }
    printf("%d\n",c);
    return 0;
}
