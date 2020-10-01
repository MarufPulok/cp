#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int area=a*b;
    int peri=2*(a+b);
    if(area>peri)
    {
        cout<<"Area"<<endl;
        cout<<area<<endl;
    }
    else if(area<peri)
    {
        cout<<"Peri"<<endl;
        cout<<peri<<endl;
    }
    else
    {
        cout<<"Eq"<<endl;
        cout<<area<<endl;
    }
    return 0;
}

