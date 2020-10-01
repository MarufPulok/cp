#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    char str[n][5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>str[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(x==1)
            break;
        for(int j=0; j<5; j++)
        {
            if(str[i][j]=='O'&&str[i][j+1]=='O'&&(j==0||j==3))
            {
                str[i][j]='+';
                str[i][j+1]='+';
                x=1;
                break;
            }

        }

    }
    if(x==0)
        cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
            {
                cout<<str[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
