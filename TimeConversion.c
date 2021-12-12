#include<stdio.h>
#include<string.h>
void main()
{
	char s[20],i,k[2],q[2];
	
	printf("Enter the time\n");
	scanf("%s",s);
		
	printf("%c\n",s[8]);
	if(s[8] == 'A')
	{
		for(i=0;i<8;i++)
			printf("%c",s[i]);
		printf("\n");
	}
	else
	{
		printf("hi\n");
		printf("%c\n",s[1]);
		if(s[1]>55)
		{
			k[0]=s[0];
			k[1]=s[1];
			k[2]='\0';
			
			printf("%s",k);
			printf("hi\n");
			for(i=0;i<10;i++)
				printf("%c",s[i]);			
		}
		else
		{
			printf("hello\n");
			s[0]=s[0]+1;
			s[1]=s[1]+2;
			puts(s);
		}
		
	}
} 

