#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    char s[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>s[i][j];
            if(s[i][j]=='C'||s[i][j]=='M'||s[i][j]=='Y')
                count++;
        }
    }
    if(count==0)
        cout<<"#Black&White";
    else
        cout<<"#Color";
    return 0;

}

