#include<stdio.h>
void main()
{
	int i,n,a[100],d,m,chance=0,j=0,sum=0,k;
	printf("Enter the number of squares in the chocolate\n");
	scanf("%d",&n);
	printf("Enter the value of d and m\n");
	scanf("%d%d",&d,&m);// d is sum and m is no of pieces
	printf("Enter the %d numbers on the chocolate\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum==d)
		{
			k++;
			i--;
			if(k<=m)
			{
				chance++;
			}
		}
	}
	printf("%d\n",chance);
}
