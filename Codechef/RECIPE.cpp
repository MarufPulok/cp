#include<bits/stdc++.h>
int main()
{
    int t1,t2,ar[50],i,j,k,l,m;
    scanf("%d",&t1);
    for(i=1;i<=t1;i++)
    {
        int max=1,x;
        scanf("%d",&t2);
        for(j=0;j<t2;j++)
        {
            scanf("%d",&ar[j]);
            if(max<=ar[j])
                max=ar[j];
        }
        for(k=max;k>=2;k--)
        {
            int ind=0;
            for(l=0;l<t2;l++)
            {
                if(ar[l]%k==0)
                    ind++;
                else
                    break;
            }
            if(ind==t2)
                break;
        }
        for(m=0;m<t2;m++)
        {
            printf("%d ",(ar[m]/k));
        }
        printf("\n");
    }
    return 0;
}

