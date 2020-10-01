#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[200],str2[200];
    gets(str1);
    gets(str2);
    strrev(str2);
    if(strcmp(str1,str2)==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

