#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int sl;
        double bs;
        scanf("%d",&sl);
        if(sl<1500)
        {
            bs=sl+((sl*10)/100.0)+((sl*90)/100.0);

        }
        else if(sl>=1500)
        {
            bs=sl+500+((sl*98)/100.0);
        }
        printf("%.2f\n",bs);
    }
    return 0;
}

