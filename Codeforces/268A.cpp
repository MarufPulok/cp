#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);

    while(n--)
    {
        cin>>v[n].first>>v[n].second;
    }

    int result = 0;

    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i].first==v[j].second)
            {
                result++;
            }
            if(v[i].second==v[j].first)
            {
                result++;
            }
        }
    }

    cout<<result<<endl;
}