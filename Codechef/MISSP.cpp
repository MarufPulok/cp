#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[100005],d,flag=0,ans;
        cin>>d;
        for(int i=0; i<d; i++)
            cin>>a[i];
        sort(a,a+d);
        for(int j=0; j<d; j++)
        {
            for(int k=j+1; k<d; k++)
            {
                if(a[j]==a[k])
                {
                    a[j]=0;
                    a[k]=0;
                }
            }
        }
        for(int l=0; ; l++)
        {
            if(a[l]!=0)
            {
                cout<<a[l]<<endl;
                break;
            }
        }
    }
    return 0;
}

