#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1){
            h=1;
            break;
        }
    }
    if(h==1)
        cout<<"HARD";
    else
        cout<<"EASY";
    return 0;
}

