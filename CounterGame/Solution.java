import java.io.*;
import java.util.*;

public class Solution {
    
    static void turns(int a){
        if(a%2==0) System.out.println("Richard");
        else System.out.println("Louise");
    }
    
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int winner=1; 
        long counter;
        
        int T=sc.nextInt();
        for(int i0=0; i0<T; i0++){
            long N=sc.nextInt();
            long n=N;
            while(N!=1){
                String ctr="1";
                BigInteger.toBinaryString(n);
                if(BigInteger.bitCount(n)>1){
                    ctr=repeat("0",BigInteger.length()-2);
                    counter=N-BigInteger.parseInt(ctr,2);
                }
                else counter=N/2;
                winner++;
            }
            turns(winner);
        }
    }
}
