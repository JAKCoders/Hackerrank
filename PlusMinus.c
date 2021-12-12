#include<stdio.h>
int n,a[20];
int ratio()
{
	int i;
	double r1=0,r2=0,r3=0,pos=0,neg=0,zer=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
			zer++;
		else if(a[i]>0)
			pos++;
		else 	
			neg++;
	}
	r1=zer/n;
	r2=pos/n;
	r3=neg/n;
	printf("%lf\n",r1);
	printf("%lf\n",r2);
	printf("%lf\n",r3);
}
void main()
{
	int i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	ratio();
	
}
