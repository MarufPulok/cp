#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0;
    char a[3],b[3], * p[20];




    gets(a);
    gets(b);
    while(b[0]-a[0]!=0||b[1]-a[1]!=0)
    {
        if(b[0]-a[0]>0&&b[1]-a[1]>0)
        {
            a[0]++;
            a[1]++;
            m++;

            p[m-1]="RU";
        }
        else if(b[0]-a[0]>0&&b[1]-a[1]<0)
        {
            a[0]++;
            a[1]--;
            m++;

            p[m-1]="RD";
        }
        else if(b[0]-a[0]<0&&b[1]-a[1]>0)
        {
            a[0]--;
            a[1]++;
            m++;
            p[m-1]="LU";
        }
        else if(b[0]-a[0]<0&&b[1]-a[1]<0)
        {
            a[0]--;
            a[1]--;
            m++;
            p[m-1]="LD";
        }
        else if(b[0]-a[0]==0&&b[1]-a[1]>0)
        {
            a[1]++;
            m++;
            p[m-1]="U";
        }
        else if(b[0]-a[0]==0&&b[1]-a[1]<0)
        {
            a[1]--;
            m++;

            p[m-1]="D";
        }
        else if(b[0]-a[0]>0&&b[1]-a[1]==0)
        {
            a[0]++;
            m++;
            p[m-1]="R";
        }
        else if(b[0]-a[0]<0&&b[1]-a[1]==0)
        {
            a[0]--;
            m++;

            p[m-1]="L";
        }
    }

    printf("%d ",m);
    int i=0;
    while(i<=m-1)
    {
        printf("\n%s",*(p+i));
        i++;
    }

}
