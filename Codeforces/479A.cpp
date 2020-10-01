#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,array[6];
    cin>>a>>b>>c;
    array[0]=a+b+c;
    array[1]=a*b*c;
    array[2]=a+b*c;
    array[3]=a*b+c;
    array[4]=a*(b+c);
    array[5]=(a+b)*c;
    sort(array,array+6);
    cout<<array[5];
    return 0;

}

