#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
      if(a!=b&&a!=c&&b==c)
        cout<<"A"<<endl;
      else if(a!=b&&a==c&&b!=c)
           cout<<"B"<<endl;
       else if(a==b&&a!=c&&b!=c)
            cout<<"C"<<endl;
       else
        cout<<"*"<<endl;
    }
}
