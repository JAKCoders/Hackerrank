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
    int n,i=0,j=0,hash=0,s;
    scanf("%d",&n);
    s=n-1;
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<s;j++)
        {
            printf(" ");
        }
        s--;
        hash += 1;
        for(j=0;j<hash;j++)
            printf("#");
        printf("\n");
    }
    return 0;
}
