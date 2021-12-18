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

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,i;
        scanf("%d",&n);
        k=n;
        if(n>37){
            while(k%5!=0){
                k++;
            }
            if(k-n<3)
                n=k;
        }
        printf("%d\n",n);
    }
}
