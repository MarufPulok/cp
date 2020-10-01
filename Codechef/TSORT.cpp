#include<bits/stdc++.h>
using namespace std;

int a[1000010];
int main()

{


    int t,i,j;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+t);
    for(j=0; j<t; j++)
    {
        printf("%d\n",a[j]);
    }
    return 0;
}

