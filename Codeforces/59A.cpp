#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[105];
    gets(str);
    int up=0,lo=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>=97)
            lo++;
        else
            up++;
    }
    if(lo>=up)
    {
        for(int i=0;i<strlen(str);i++)
        {
            str[i]=tolower(str[i]);
        }
    }
    else
    {
        for(int i=0;i<strlen(str);i++)
        {
            str[i]=toupper(str[i]);
        }
    }
    puts(str);
    return 0;
}


