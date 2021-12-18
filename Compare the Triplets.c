#include <stdio.h>
int main()
{
    int n=3,a[n],b[n],c[n],i=0,j=0,x=0,y=0;
    if(n==3)
    {
        for(;i<n;i++)
            scanf("%d",&a[i]);
        for(;j<n;j++)
            scanf("%d",&b[j]);
        for(i=0;i<n;i++)
        {
            if(a[i]>b[i])
                x= x+1;
            else if(a[i]<b[i])
                y = y+1;
        }
        c[0]=x;
        c[1]=y;
        printf("%d %d",c[0],c[1]);
    }
    return 0;
}
