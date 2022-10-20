#include<bits/stdc++.h>
using namespace std;
vector<long> v;
void possibleArray()
{
    long value = 1;
    while(value<=pow(10,9))
    {
        v.push_back(value);
        value*=3;
    }
}
int main()
{
    possibleArray();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>v.size())
        {
            cout<<"NO"<<endl;
            continue;
        }

        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
        }
    }
}