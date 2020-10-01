#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[110];
        scanf("%s",&str);
        int a=0,b=0;
        for(int i=0; i<strlen(str); i++)
        {
            if(str[i]=='a')
                a++;
            else
                b++;
        }
        if(a>b)
            cout<<b<<endl;
        else
            cout<<a<<endl;
    }
    return 0;
}


