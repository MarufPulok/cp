#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    gets(s);
    int c=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='4'||s[i]=='7')
            c++;
    }
    if(c==4||c==7)
        printf("YES");
    else
        printf("NO");
    return 0;
}

