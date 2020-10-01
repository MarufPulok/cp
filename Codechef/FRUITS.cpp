#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int a,o,c;
        cin>>a>>o>>c;
        while(c)
        {
            if(a<=o)
                a++;
            if(o<a)
                o++;
            c--;
        }
        cout<<abs(a-o)<<endl;

    }
    return 0;
}

