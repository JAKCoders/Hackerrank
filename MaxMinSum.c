#include<stdio.h>
int main()
{
    int a[1000],n,sum[2000]={0},low,high;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
                sum[i]+=a[j];
        }
    }
    for(int i=0;i<n;i++)
        printf("%d\t",sum[i]);
    low=sum[0];
    high=sum[0];
    for(int i=0;i<n;i++)
    {
        if(sum[i]<low)
            low=sum[i];
        else if(sum[i]>high)
            high=sum[i];
    }
    printf("%d\t%d\t", low,high);
}
