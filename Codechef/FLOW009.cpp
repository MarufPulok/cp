#include<bits/stdc++.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        double q,p,dis;
        scanf("%lf%lf",&q,&p);
        if(q<1000)
            printf("%6lf\n",p*q);
        else
        {
            dis=(p*q*10)/100;
            printf("%6lf\n",((p*q)-dis));
        }
    }
    return 0;
}

