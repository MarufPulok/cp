#include<bits/stdc++.h>
using namespace std;
int main()
{
    char u[100];
    int c=0;
    gets(u);
    sort(u,u+strlen(u));
    for(int i=0;i<strlen(u);i++)
    {
        if(u[i]!=u[i+1])
            c++;
    }
    if(c%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}

