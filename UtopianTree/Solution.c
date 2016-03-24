#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t, a0, n, h=1, a1=0; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        h=1;
        scanf("%d",&n);
        if (n==1){
            printf("%d\n",++h);
        }
        else if (n%2==0) {
            for (; a1<n/2; a1++){
                h*=2; 
                h++;
            }
            printf("%d\n",h);
        } 
        else if (n%2==1){
            for (; a1<n/2; a1++){
                h*=2;
                h++;
            }
            h*=2;
            printf("%d\n",h);
        }
        else 
            printf("%d\n",h);
    }
    return 0;
}
