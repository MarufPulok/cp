#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, sum = 0,count=0;
    int arr[15];
    cin >> k;
    
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
    }

    if(k==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    sort(arr,arr+12, greater<int>());

        for(int i=0;i<12;i++)
        {
          sum+=arr[i];
          count++;
          if(sum>=k)
          break;
        }

        if(sum<k)
        cout<<"-1"<<endl;
        else
        cout<<count<<endl;
    

}