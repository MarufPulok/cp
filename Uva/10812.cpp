#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x=(a+b)/2,y=(a-b)/2;
        if((a+b)%2!=0||a<b)
            cout<<"impossible"<<endl;
        else
            cout<<x<<" "<<y<<endl;
    }
}
