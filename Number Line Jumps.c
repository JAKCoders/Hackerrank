#include<stdio.h>
int main()
{
    long long x1,x2,v1,v2,flag=0;
    scanf("%lld%lld%lld%lld",&x1,&v1,&x2,&v2);
    while(1){
        if (x1 == x2){
            flag=1;
            break;
        }
        if ((v1 > v2 && x1 > x2) || (v2 > v1 && x2 > x1) || (v2 == v1 && x2 != x1))
                break;
        x1 += v1;
        x2 += v2;
    }
    if(flag)
        printf("YES");
    else 
        printf("NO");

}
