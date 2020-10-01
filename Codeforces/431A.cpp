#include<bits/stdc++.h>
using namespace std;
int main()
{

    int o,t,th,f,count=0;
    cin>>o>>t>>th>>f;
    char str[100002];
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++)
    {
    if(str[i]=='1')
    count+=o;
    if(str[i]=='2')
    count+=t;
    if(str[i]=='3')
    count+=th;
    if(str[i]=='4')
    count+=f;

    }
    cout<<count;
    return 0;
}

