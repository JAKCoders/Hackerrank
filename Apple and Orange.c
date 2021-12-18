#include <stdio.h>
#include<stdlib.h>

int main(){
    int s,t,a,b,m,n,d,temp,i=0,count=0;
    scanf("%d%d%d%d%d%d",&s,&t,&a,&b,&m,&n);
    for(i=0;i<m;i++){
       scanf("%d",&temp);
       temp=temp+a;
       if(temp>=s && temp<=t)
            count++;
    }
    printf("%d\n",count);
    count=0;
    for(i=0;i<n;i++){
       scanf("%d",&temp);
       temp=temp+b;
       if(temp>=s && temp<=t)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
