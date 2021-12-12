#include<stdio.h>
void main()
{
	long long n,a[1000000],i,hs=0,ls=0,count1=0,count2=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	hs=a[0];
	ls=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>hs)
		{
			hs=a[i];
			count1++;
		}
		else if(a[i]<ls)
		{
			ls=a[i];
			count2++;
		}
		else if(a[i]==hs || a[i]==ls)
			continue;		
	}
	printf("%lld\t%lld\n",count1,count2);
}
