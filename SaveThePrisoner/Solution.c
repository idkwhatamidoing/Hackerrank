#include <stdio.h>

int main() {
    int T;
    long long int N, M, S, a;

    scanf("%d",&T);

    while(T!=0){
        
        scanf("%lld %lld %lld",&N, &M, &S);
        
        if(M>=N){
            if (M==N) a=M;
            else if(M%N==0) a=M/N-1;
            else a=S+(M%N-1);
        }
        else a=S+(M-1);

        if (a>N) a-=N;

        T--;
        printf("%lld\n",a);
    }
    return 0;
}

