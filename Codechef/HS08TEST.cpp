#include<bits/stdc++.h>
int main()
{
    float lb,bb;
    int wa;
    scanf("%d%f",&wa,&bb);
    if((wa%5==0)&&(wa<=(bb-0.5)))
    {
        lb=bb-wa-0.5;
        printf("%.2f",lb);
    }
    else
        printf("%.2f",bb);
    return 0;
}

