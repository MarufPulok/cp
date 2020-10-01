#include<bits/stdc++.h>
int main()
{
    int test,arr[3],i,j,c,d,swap;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(c=0;c<2;c++)
        {
            for(d=0;d<2-c;d++)
            {
                if(arr[d]>arr[d+1])
                {
                    swap=arr[d];
                    arr[d]=arr[d+1];
                    arr[d+1]=swap;
                }
            }
        }
        printf("%d\n",arr[1]);
    }
    return 0;
}

