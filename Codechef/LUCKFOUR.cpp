#include<bits/stdc++.h>
int main()
{
    int test,i,j;
    char d[20];
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        int f=0;
        scanf("%s",&d);
        for(j=0;j<strlen(d);j++)
        {
            if(d[j]=='4')
                f++;
        }
        printf("%d\n",f);
    }
    return 0;
}

