#include <stdio.h>
#include <stdlib.h>

int main()
{
        long long sum=0;
    int n,i=0,a[100];
    scanf("%d",&n);
    if(n<=10 && n>0)
    {
        for(i=0; i<n;i++)
            scanf("%d",&a[i]);
        for(i=0; i<n;i++)
            sum += a[i];
        printf("%lld",sum);
    }
    return 0;
}
