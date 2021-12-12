#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long i,n,count=1;
    long long  a[1000000],high;
    scanf("%lld",&n);
    
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    high=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>high)
        {
            high=a[i];
            count=1;
        }
        else if(a[i]==high)
            count++;
    }    
    printf("%lld\n",count);
}     

