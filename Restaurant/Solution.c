#include <stdio.h>

int euclid(int x, int y){
    if(x==y) return y;
    else if(x>y) return euclid((x-y),y);
    else return euclid((y-x),x);
}

int main(){
    int t,n1=0,n2=0,s=0,a=0;
    scanf("%d",&t);
    while(t!=0){
        scanf("%d %d",&n1,&n2);
        s=euclid(n1,n2);
        a=(n1*n2)/(s*s);
        printf("%d\n",a); 
        --t; 
    }      
    return 0;
}
