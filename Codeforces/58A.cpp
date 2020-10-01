#include<bits/stdc++.h>
using namespace std;
int main()
{
   char a[105];
  scanf("%s",&a);
    int i=0,count=0;
    for(; i<strlen(a); i++)

        if(a[i]=='h')
        {
            count++;
            i++;
            break;
        }
    for(; i<strlen(a); i++)

        if(a[i]=='e')
        {
            count++;
            i++;
            break;
        }
    for(; i<strlen(a); i++)

        if(a[i]=='l')
        {
            count++;
            i++;
            break;
        }
    for(; i<strlen(a); i++)

        if(a[i]=='l')
        {
            count++;
            i++;
            break;
        }
    for(; i<strlen(a); i++)

        if(a[i]=='o')
        {
            count++;
            i++;
            break;
        }

    if(count>=5)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

