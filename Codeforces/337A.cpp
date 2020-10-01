#include<stdio.h>
int main()
{
	int i,j,m,n,t=1000;
	scanf("%d%d",&n,&m);
	int a[m];
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	for(j=i;j<m;j++)
	if(a[i]>a[j])
	{
		t=a[i];a[i]=a[j];a[j]=t;
	}
	for(i=0;i<m-n+1;i++)
	{if(a[n-1+i]-a[i]<t)
	t=a[n-1+i]-a[i];}
	printf("%d",t);
	return 0;
}
