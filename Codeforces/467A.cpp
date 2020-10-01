#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,p,q,count=0;
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        scanf("%d%d",&p,&q);
        if(q-p>=2)
            count++;
    }
    printf("%d",count);
    return 0;
}

