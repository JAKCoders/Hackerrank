#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,a[30][30],pdia=0,sdia=0,diff=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			
				pdia=pdia+a[i][j];
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==(n-1))
		
				sdia=sdia+a[i][j];
		}
	}
	printf("%d\n",abs(pdia-sdia));
}













