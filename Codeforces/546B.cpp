#include <stdio.h>

int n,a[7555];

int main()
{

    scanf("%d", &n);
    int x;
    int res=0;
    for(int i = 1; i<=n; i++)
    {
        scanf("%d", &x);
        while(a[x])
            x++,res++;
        a[x]=1;
    }
    printf("%d", res);
    return 0;
}
