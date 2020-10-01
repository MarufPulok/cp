#include<bits/stdc++.h>
int main()
{
    int a[100],n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if((a[i]%2)==0)
            c++;
    }
    if(c>(n-c))
        printf("READY FOR BATTLE");
    else
        printf("NOT READY");
    return 0;
}

