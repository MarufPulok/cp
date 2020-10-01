#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[250],s2[200],s3[200];
    int flag=1;
    gets(s1);
    gets(s2);
    gets(s3);
    if(strlen(s1)+strlen(s2)>strlen(s3)||strlen(s1)+strlen(s2)<strlen(s3))
    {
        cout<<"NO";
    }
    else
    {
        strcat(s1,s2);
        sort(s1,s1+strlen(s1));
        sort(s3,s3+strlen(s3));
        for(int i=0; i<strlen(s3); i++)
        {
            if(s1[i]!=s3[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            cout<<"NO";
        else
            cout<<"YES";
    }
    return 0;
}

