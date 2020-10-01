#include<bits/stdc++.h>
int main()
{
    int test,i,f,s;
    char n[8];
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%s",&n);
        if(n[0]=='1')
            f=1;
        if(n[0]=='2')
            f=2;
        if(n[0]=='3')
            f=3;
        if(n[0]=='4')
            f=4;
        if(n[0]=='5')
            f=5;
        if(n[0]=='6')
            f=6;
        if(n[0]=='7')
            f=7;
        if(n[0]=='8')
            f=8;
        if(n[0]=='9')
            f=9;
        if(n[strlen(n)-1]=='0')
            s=0;
        if(n[strlen(n)-1]=='1')
            s=1;
        if(n[strlen(n)-1]=='2')
            s=2;
        if(n[strlen(n)-1]=='3')
            s=3;
        if(n[strlen(n)-1]=='4')
            s=4;
        if(n[strlen(n)-1]=='5')
            s=5;
        if(n[strlen(n)-1]=='6')
            s=6;
        if(n[strlen(n)-1]=='7')
            s=7;
        if(n[strlen(n)-1]=='8')
            s=8;
        if(n[strlen(n)-1]=='9')
            s=9;
        printf("%d\n",f+s);
    }
    return 0;
}

