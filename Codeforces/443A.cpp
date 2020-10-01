#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[2500];
    gets(str);
    int l,c=0,i,x=0;
    l=strlen(str);
    sort(str,str+l);
    for(i=0; i<l-1; i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            c++;
            if(str[i]==str[i+1])
                c--;
        }
    }
    cout<<c;
    return 0;
}

