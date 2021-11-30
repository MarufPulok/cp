#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m[3][3],sum=0;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
    {
        cin>>m[i][j];
        sum+=m[i][j];
    }

    for(int i=0;i<3;i++)
    {
        int row=0;
        for(int j=0;j<3;j++)
            row+=m[i][j];

        m[i][i]=(sum/2)-row;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
