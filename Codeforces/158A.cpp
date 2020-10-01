#include<bits/stdc++.h>
int main()
{
    int n,k,a[50],i,c=0,pos,j;
    scanf("%d%d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    pos=a[k-1];
    for(j=0; j<n; j++)
    {
        if(pos==0)
        {
            if(a[j]>pos)
                c++;
        }
        else
        {
            if(a[j]>=pos)
                c++;
        }
    }
    printf("%d",c);
    return 0;
}
