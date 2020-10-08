#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,count=0;
        cin>>n;
        int n1=n;
        while(n!=0)
        {
            int x=n%10;
            if(x!=0&&n1%x==0)
                count++;
            n=n/10;

        }
        cout<<count<<endl;
    }
}
