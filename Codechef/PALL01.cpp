#include <bits/stdc++.h>

int main()
{
	int t,n1;
    scanf("%d",&t);
    while(t--)
    {
      long int n, reverse=0, rem;
      scanf("%ld", &n);
      n1=n;
      while(n!=0)
      {
         rem=n;
         reverse=reverse*10+rem;
         n/=10;
      }
      if(reverse==n1)
        printf("wins\n");
      else
        printf("losses\n");
    }
	return 0;
}

