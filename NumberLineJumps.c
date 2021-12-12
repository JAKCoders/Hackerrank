#include<stdio.h>
int main()
{
	long long x1,x2,v1,v2,j1=0,j2=0;
	scanf("%lld%lld",&x1,&v1);
	scanf("%lld%lld",&x2,&v2);
	if(x1<x2 && v1<v2)
		printf("NO\n");
	else
	{
		while(x1!=x2)
		{
			x1=x1+v1;
			j1++;
			x2=x2+v2;
			j2++;
		}
		printf("%lld%lld",j1,j2);
		if(x1==x2 && j1==j2)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
