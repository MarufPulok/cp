#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b;
    cin>>a>>b;
    for(long int i=1;i<=b;i++)
    {
        if(a%10==0)
            a/=10;
        else
            a--;
    }
    cout<<a;
    return 0;
}

