#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={30,4,12,45,90,46};

    auto it=max_element(v.begin(),v.end());
    auto it2=min_element(v.begin(),v.end());
    cout<<(*it)<<" "<<(*it2)<<endl;

    int arr[]={30,4,12,45,90,46};
    //is this committed?

    cout<<*max_element(arr,arr+6);
}
