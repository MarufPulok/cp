#include<bits/stdc++.h>
int main()
{
    long int tc,n,i;
    scanf("%ld",&tc);
    for(i=1;i<=tc;i++)
    {
      scanf("%ld",&n);
      int a,b,c=0;
      b=n;
      while(1)
      {
          a=b;
          c=c+a;
          b=b/10;
          if(b==0)
            break;
      }
      printf("%d\n",c);
    }
    return 0;
}

