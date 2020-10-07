#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long x=((sqrt(1+4*2*n)-1)/2);
        cout<<x<<endl;
    }
}
