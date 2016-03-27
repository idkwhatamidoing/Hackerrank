#include <stdio.h>

int main() {
    int T, N, M, S, a;

    scanf("%d",&T);
    
    while(T!=0){
        scanf("%d %d %d",&N, &M, &S);
        
        a=S;
        
        for(int i=1; i<M; i++){
            a++;
            if (i==N)
                a=0;
        }
        
        T--;
        printf("%d",a);
    } 
     
    return 0;
}
