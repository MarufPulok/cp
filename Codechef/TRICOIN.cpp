#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long t=0;
    cin>>t;
    while(t--)
    {
        long long n=0;
        cin>>n;
        cout<<(long long)(sqrt(1+8*n)-1)/2<<"\n";
    }
    return 0;
}

