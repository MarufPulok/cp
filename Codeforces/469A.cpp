#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,arr[200],arr2[200],p,q,c=0;
    cin>>l;
    cin>>p;
    for(int z=0; z<p; z++)
        scanf("%d",&arr[z]);
    cin>>q;
    for(int x=p; x<p+q; x++)
        scanf("%d",&arr[x]);
    sort(arr,arr+(p+q));
    for(int i=0; i<p+q; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr[i]=arr2[i];
            c++;
        }
    }
    if(c==l)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}

