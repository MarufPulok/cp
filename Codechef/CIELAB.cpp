#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=a-b;
    if(ans==9)
        cout<<ans-1;
    else
        cout<<ans+1;
    return 0;
}

