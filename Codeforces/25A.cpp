#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e=0,o=0,pos;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            e++;
        else
            o++;
    }
    if(e==1)
    {
        for(int j=0;j<n;j++){
            if(a[j]%2==0)
            {
                pos=j+1;
                break;
            }
        }
    }
    else
    {
        for(int k=0;k<n;k++)
            {
                if(a[k]%2!=0)
                {
                    pos=k+1;
                    break;
                }
            }
    }
    cout<<pos;
    return 0;
}

