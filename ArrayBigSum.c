#include<stdio.h>

void main()
{
	int n,i;
	long a[100],result=0,count=0;
	printf("Enter n\n");
	scanf("%d",&n);
	printf("Enter the array\n");
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
	for(i=0;i<n;i++)
		result=result+a[i];
	printf("%ld\n",result);
}
