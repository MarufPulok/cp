#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x1=0,y1=0,z1=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        x1+=x;
        y1+=y;
        z1+=z;
        }
        if(x1==0&&y1==0&&z1==0)
            printf("YES");
        else
        printf("NO");
            return 0;
}

