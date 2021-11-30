#include<bits/stdc++.h>
using namespace std;
string a;
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        map<string,int>q;
        q.clear();
        int num=0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            q[a]++;
            num=max(num,q[a]);
        }
        printf("%d\n",num);
    }
    return 0;
}
