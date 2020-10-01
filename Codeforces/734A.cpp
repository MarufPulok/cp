#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a=0,d=0;
    cin>>n;
    char str[100010];
    cin>>str;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton";
    else if(a<d)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}

