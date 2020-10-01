#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,ans,rem,count=0;
        cin>>a>>b;
        ans=a+b;
        while(ans!=0)
        {
            rem=ans;
            if(rem==0||rem==6||rem==9)
                count+=6;
            else if(rem==1)
                count+=2;
            else if(rem==1)
                count+=2;
            else if(rem==2||rem==3||rem==5)
                count+=5;
            else if(rem==4)
                count+=4;
            else if(rem==7)
                count+=3;
            else if(rem==8)
                count+=7;

            ans/=10;
        }
        cout<<count<<endl;
    }
}

