#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        bool flag=false;
        int R, C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i=0;G_i<R;G_i++){
           cin >> G[G_i];
        }
        int r, c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i<r;P_i++){
           cin >> P[P_i];
        }
        int j2;
        for(int i1=0; i1<R-r; i1++){
            int j1=0;
            int temp=c;
            while(flag==false || temp!=C){
                string str0 = G[i1].substr(j1,temp);
                if(strcmp(str0,P[j2])==0){
                    for(int i2=1; i2<r; i2++){
                        str0 = G[++i1].substr(j1,temp);
                        if(strcmp(str0,P[++j2])==0) flag=true;
                        else {flag=false; break;}
                    }
                }
                temp++;
                j1++; 
                }
                
            }
        if(flag==true) cout << "YES" << endl;
        cout << "NO" << endl;
        }
        
    return 0;
}
