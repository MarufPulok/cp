#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[205];
    int flg=1;
    gets(str);
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='W'&& str[i+1]=='U' && str[i+2]=='B')
        {
            i+=2;
            if(flg!=1)
            {
                cout<<" ";
            }
            continue;
        }
        else
        {
            flg=0;
            cout<<str[i];
        }
    }
    return 0;
}

