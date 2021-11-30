#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int q;
    cin>>str>>q;

    while(q--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        k%=r-l+1;

        rotate(str.begin()+l-1,str.begin()+r-k,str.begin()+r);
    }

    cout<<str;
}
