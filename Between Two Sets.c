#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int m,n,i=0,cnt=0,ok=1,j;
    scanf("%d%d",&m,&n);
    int a[m],b[n];
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for (i=1; i<=100; i++) {
        ok=1;
        for (j=0; j<m && ok; j++) {
            if (i%a[j] != 0) 
                ok = 0;
        }
        for (j=0; j<n && ok; j++) {
            if (b[j]%i != 0) 
                ok = 0;
            }
            if(ok)
                cnt++;
        }
        printf("%d",cnt);
        
    return 0;
}
