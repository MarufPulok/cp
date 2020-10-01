#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c=0,cap=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        c-=a;
        c+=b;
        cap=max(c,cap);
    }
    printf("%d",cap);
    return 0;
}


