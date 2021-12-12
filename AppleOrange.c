#include<stdio.h>
void main()
{
	long long s,t,m,n,a[100000],b[100000],p,q,i,count1=0,count2=0;
	
	scanf("%lld%lld",&s,&t);
	
	scanf("%lld%lld",&p,&q);
	
	scanf("%lld%lld",&m,&n);
	
	for(i=0;i<m;i++)
		scanf("%lld",&a[i]);
	
	for(i=0;i<n;i++)
		scanf("%lld",&b[i]);
	for(i=0;i<m;i++)
	{
		a[i]=p+a[i];
		if(a[i]>=s && a[i]<=t)
			count1++;
	}
	for(i=0;i<n;i++)
	{
		b[i]=q+b[i];
		if(b[i]>=s && b[i]<=t)
			count2++;
	}
	printf("%lld\n%lld\n",count1,count2);
}

