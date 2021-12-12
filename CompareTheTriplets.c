#include<stdio.h>
int compare(int a[],int b[],int i)
{
        if(a[i]==b[i])
            return 0;
        else if(a[i]>b[i])
            return 1;
        else 
            return 2;
}
int main()
{
    int x,n,a[5],b[5],i,c[2],k=0,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for( int i=0;i<3;i++)
    {
        x=compare(a,b,i);
        switch(x)
        {
            case 0:break;
            case 1:k++;
                break;
            case 2:j++;        
                break;
        }
    }
    c[0]=k,c[1]=j;
    for(i=0;i<2;i++)
        printf("%d\t",c[i]);
    return 0;
}
    
    
    
    

