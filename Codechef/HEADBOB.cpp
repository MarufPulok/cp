#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,check=0;
        cin>>n;
        char str[n];
        scanf("%s",&str);
        for(int j=0;j<n;j++)
        {
            if(str[j]=='I')
            {
                check=1;
                cout<<"INDIAN"<<endl;
                break;
            }
            if(str[j]=='Y')
            {
                check=1;
                cout<<"NOT INDIAN"<<endl;
                break;
            }
        }
        if(check==0)
            cout<<"NOT SURE"<<endl;
    }
    return 0;
}

