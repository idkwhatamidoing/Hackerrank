#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int T,M,N,c[N],index[N],list[N];
    cin>>T;
   
    while(T>0){
        
        cin>>M;
        cin>>N;
        
        for(int a1=0, a0=0; a0<N; a0++){
            cin>>c[a0];
            
            if(c[a0]<M){
                index[a1]=a0+1;
                list[a1]=c[a0];
                
                for(int a2=0; a2<a1; a2++){
                     if(list[a0]+list[a2]==M && a0!=a2) { 
                          cout<<index[a2]<<" "<<a0+1<<endl;
                          break;
                     } 
                }
                a1++;   
            }
        }
        --T;
    }
    return 0;
}
