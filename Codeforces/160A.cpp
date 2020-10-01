#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0,answer=0,count=0;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    for(int i=0; i<n; i++)
    {
        sum+=array[i];
    }
    sum=sum/2;
    for( ; answer<=sum; )
    {
        ++count;
        answer+=array[n-count];
    }
    cout<<count;
    return 0;
}

