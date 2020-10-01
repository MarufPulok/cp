#include<bits/stdc++.h>
using namespace std;
int main()
{
    double f=0.0,a[150],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
        f+=a[j];
    f=f/n;
    printf("%.12lf",f);
    return 0;

}

