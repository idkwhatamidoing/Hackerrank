#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int t,n,x;
    bool flag=false;
    scanf("%d",&t);
    while(t!=0){
        scanf("%d",&n);
        x=sqrt(1-(8*n))/2;
        x-=-1;
        if(x==floor(x)) flag=true;
    }
    if(flag==true) printf("Go on Bob %d\n",x);
    else puts("Better Luck Next Time\n");
    
    return 0;
}
