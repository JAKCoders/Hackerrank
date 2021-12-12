#include<stdio.h>
int n;
int simpleArraySum(int ar_count, long* ar) 
{
     int i;
     for(i=0;i<n;i++)
            ar_count=ar_count+ar[i];
    
    return ar_count;

}
int main()
{
        long b[100],result=0;
        int count=0,i;

        scanf("%d",&n);
       
        for(i=0;i<n;i++)
        {
                scanf("%ld",&b[i]);
                result=simpleArraySum(count,b);
        }
        
        printf("%ld",result);
}


