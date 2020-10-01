#include<bits/stdc++.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        char s[100];
        scanf("%s",&s);
        if(strlen(s)<=10)
        {
            puts(s);
        }
        else
        {
            printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);
        }

    }
    return 0;
}
