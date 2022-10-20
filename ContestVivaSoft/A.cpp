#include<bits/stdc++.h>
using namespace std;
char str[505][505];
int n;

bool fun(int x,int y)
{
    if(x<0||y<0||x>=n||y>=n||str[x][y]=='.')
        return false;
    else
        return true;
}


int main()
{
    int ans=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>str[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(fun(i,j)&&fun(i-1,j-1)&&fun(i-1,j+1)&&fun(i+1,j-1)&&fun(i+1,j+1))
            {
                ans++;
            }
        }
    }

    cout<<ans<<endl;
}