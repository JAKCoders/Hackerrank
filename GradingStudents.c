#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,grade[100],k,i,d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&grade[i]);
	for(i=0;i<n;i++)
	{
		if(grade[i]<38)
			continue;
		else if(grade[i]%5==0)
			continue;
		else
		{
			k=((grade[i]/5)+1)*5;
			d=k-grade[i];
			if(d<3)
				grade[i]=k;
		}
	}
	for(i=0;i<n;i++)
		printf("%d\n",grade[i]);
}

