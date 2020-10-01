#include<bits/stdc++.h>
int main()
{
    long long int a, b, c;
    scanf("%lld%lld%lld",&a,&b,&c);
    long long int d=0;
    double s=0;
    if(a==0&&b==0&&c==0)
    printf("-1\n");
    else if(a==0&&b==0)
    {
      printf("0\n");
    }
    else if(a==0)
    {
      printf("1\n%.8f\n", -c*1.0/b);
    }
    else
    {
       d = b*b-4*a*c;
      if(d>0)
      {
        s = sqrt(b*b*1.0-4*a*c);
        double r1 = (-b-s)/(2*a);
        double r2 = (-b+s)/(2*a);
        if(r1 < r2)
        printf("2\n%.8f\n%.8f\n", r1, r2);
        else
        printf("2\n%.8f\n%.8f\n", r2, r1);
      }
      else if(d==0)
      {
        printf("1\n%.8f\n", -b/2.0/a);
      }
      else
      {
      printf("0\n");
      }
    }

  return 0;
}
