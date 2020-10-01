#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a1[200],a2[200];
    scanf("%s",&a1);
    scanf("%s",&a2);
    for(int i=0;i<strlen(a1);i++)
    {
        if(a1[i]==a2[i])
            cout<<"0";
        else
            cout<<"1";
    }
    return 0;
}

