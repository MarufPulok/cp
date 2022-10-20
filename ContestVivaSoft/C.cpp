#include<bits/stdc++.h>
using namespace std;


int main()
{

    string str;
    int n,p,q;
    cin>>n>>p>>q;
    cin>>str;
    int length = str.size();
    int count=0;
    while(length>=0)
    {
        if(length%p==0)
            break;
        count++;
        length-=q;
    }

    if(length<0)
        cout<<-1<<endl;
    else
    {
        int count1=length/p;
        int x=0;
        cout<<count1+count<<endl;

        for(int i=1; i<=count1; i++)
        {
            cout<<str.substr(x,q)<<endl;
            x+=p;
        }

        for(int i=1; i<=count; i++)
        {
            cout<<str.substr(x,q)<<endl;
            x+=q;
        }
    }

    return 0;
}
