#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    
    bool exist=false;
    int T, N, I;
    cin>>T;
    
    while(T!=0){
       
        cin>>N;
        int A[N],j=N-1,i=0,b=0,c=j;
        
        for(int a0=0; a0<N; a0++) cin>>A[a0];
        
        if(N==1) exist=true;
        else if(N==2) exist=false;
            
        for(int a1=0; a1<N-2; a1++){
            
           if(A[i]>A[j]) A[j]+=A[--c];
           else if(A[i]<A[j]) A[i]+=A[++b];
           else{
                   if(N%2==0 && (c-1)-(b+1)==1){exist=false; break;}
                   else if(N%2==0 && (c-1)-(b-1)==0){exist=true; break;}
               
                    A[i]+=A[++b];
                    A[j]+=A[--c];
               
                   if(A[i]<A[j] || A[i]>A[j]) exist=false;
                   else exist=true;
              }
        }
        
        if (exist==true) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
        T--;
    }  
    return 0;
}
