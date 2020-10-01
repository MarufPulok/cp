#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>y)
        swap(x,y);
    y=(y-x)/2;
    cout<<x<<" "<<y;
    return 0;
}
