#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,count=0;
	cin>>t;
	while(t--)
	{
		char str[50];
		scanf("%s",&str);
		if(strcmp(str,"Tetrahedron")==1)
			count+=4;
		else if (strcmp(str,"Cube")==1)
		     count+=6;
		 else if (strcmp(str,"Octahedron")==1)
		 	count+=8;
		 else if(strcmp(str,"Dodecahedron")==1)
		 	count+=12;
		 else
		 	count+=20;

	}
	cout<<count;
	return 0;
}
