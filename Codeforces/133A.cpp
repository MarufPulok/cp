#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int yn=0;
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
            yn=1;
            break;
        }
    }
    if(yn==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}

