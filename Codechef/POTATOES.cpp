#include<bits/stdc++.h>
using namespace std;
bool prime(int a)
{
    bool check=true;
    for(int i=2; i<=a/2; i++)
    {
        if(a%i==0)
        {
            check=false;
            break;
        }
    }
    if(check==false)
        return false;
    else
        return true;

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,ans;
        bool f=false;
        cin>>x>>y;
        ans=x+y+1;
        while(1)
        {
            f=prime(ans);
            if(f==true)
            {
                cout<<ans-(x+y)<<endl;
                break;
            }
            else
                ans++;

        }

    }
    return 0;
}




