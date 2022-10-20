#include<bits/stdc++.h>
using namespace std;

int div(int a)
{
    int count=0;
    for(int i=2;i<=a;i++)
    {
        if(a%i==0)
    }

    return count;
}

int main()
{
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(div(i)==2)
            count++;
    }

    cout<<count<<endl;

    return 0;
}
