#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,count=0;
    string a,b;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    count=count+min(10-abs(a[i]-b[i]),abs(a[i]-b[i]));
    cout<<count;
    return 0;
}

