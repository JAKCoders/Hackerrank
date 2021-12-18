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
    int n,arr[100],i=0;
    float b=0.0,c=0.0,a=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]>0)
            a++;
        else if(arr[i]<0)
            b++;
        else 
            c++;
    }
    printf("%f\n%f\n%f\n",a/n,b/n,c/n);
    return 0;
}
