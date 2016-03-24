#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t, a0=0, n; 
    scanf("%d",&t);
    for(; a0 < t; a0++){
        scanf("%d",&n);
        int h=1;
        for(int a1=1; a1<=n; a1++){
            if(a1%2!=0)
                h*=2;
            else
                ++h;       
        }
        printf("%d\n",h);
    }
    return 0;
}
