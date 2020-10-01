#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[100000],n,i,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        sort(a,a+n);
        printf("%d\n",(a[0]+a[1]));
    }
    return 0;
}

