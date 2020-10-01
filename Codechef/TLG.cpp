#include<bits/stdc++.h>
int main()
{
    int one,two,round,i,dif2=0,dif1=0,a=0,b=0,lead2=0,lead1=0;
    scanf("%d",&round);
    for(i=1; i<=round; i++)
    {
        scanf("%d%d",&one,&two);
        a+=one;
        b+=two;
        if(a>=b)
        {
            dif1=a-b;
        }
        else if(a<b)
        {
            dif2=b-a;
        }
        if(dif1>lead1)
            lead1=dif1;
        if(dif2>lead2)
            lead2=dif2;


    }
    if(lead1>lead2)
        printf("1 %d",lead1);
    if(lead1<lead2)
        printf("2 %d",lead2);
    return 0;
}


