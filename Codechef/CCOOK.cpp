#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a[5],count=0;
        for(int i=0; i<5; i++)
        {
            cin>>a[i];
            count+=a[i];
        }
        if(count==0)
            cout<<"Beginner"<<endl;
        if(count==1)
            cout<<"Junior Developer"<<endl;
        if(count==2)
            cout<<"Middle Developer"<<endl;
        if(count==3)
            cout<<"Senior Developer"<<endl;
        if(count==4)
            cout<<"Hacker"<<endl;
        if(count==5)
            cout<<"Jeff Dean"<<endl;
    }
}

