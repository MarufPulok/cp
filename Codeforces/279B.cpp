#include<bits/stdc++.h>
using namespace std;
long int arr[100100];
int main()
{
    long int i,j,n,t,ans,sum;
    cin>>n>>t;

        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        j=-1,sum=0,ans=0;
        for(i=0; i<n; i++)
        {
            if(sum+arr[i]<=t)
                sum+=arr[i];
            else
            {
                sum+=arr[i];
                while(sum>t)
                {
                    j++;
                    sum-=arr[j];
                }
            }
            ans=max(ans,i-j);
        }
        cout<<ans<<endl;


}

