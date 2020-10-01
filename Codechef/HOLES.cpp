#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=0;
        char str[105];
        scanf("%s",&str);

        for(int i=0; i<strlen(str); i++)
        {
            if(str[i]=='A')
                n++;
            if(str[i]=='D')
                n++;
            if(str[i]=='O')
                n++;
            if(str[i]=='P')
                n++;
            if(str[i]=='Q')
                n++;
            if(str[i]=='R')
                n++;
            if(str[i]=='B')
                n+=2;

        }
        cout<<n<<endl;
    }
    return 0;
}

