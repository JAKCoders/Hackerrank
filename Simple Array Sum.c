#include<string.h>
#include<stdio.h>
int main()
{
    int n=100000,sum=0,ar[n];
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
            sum = sum + ar[i];
        }
        printf("%d",sum);
        
    }
    return 0;
}
