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
    int a[100][100],i=0,j=0,x=0,y=0,sum,diff,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i==j)
                x += a[i][j];
    j=n-1;
    for(i=0;i<n;i++)
    {
        if(j>=0)
        {
            y += a[i][j];    
            j--;
        }
    }
            
    //temp =x;
    sum = x+y;
    diff = abs(x-y);
    printf("%d",diff);
    
            
    return 0;
}

