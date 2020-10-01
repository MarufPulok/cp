#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,z=0,o=0;
    cin>>n;
    char str[n];
    scanf("%s",&str);
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
            z++;
        else
            o++;
    }
  if(z>=o)
    cout<<n-2*o;
  else if(z<=o)
    cout<<n-2*z;
    return 0;
}
