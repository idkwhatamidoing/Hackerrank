import java.io.*;
import java.util.*;
import java.math.*;

public class Solution{
    
    public static void turns(int a){
        if(a%2==0) System.out.println("Richard");
        else System.out.println("Louise");
    }
 
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int winner=1; 
        BigInteger N, n, two;
        two = new BigInteger("2");
        
        int T=sc.nextInt();
        for(int i0=0; i0<T; i0++){
            N = new BigInteger(sc.nextBigInteger());
            n = new BigInteger(bigIntN);
            
            while(N!=BigInteger.ONE){
                String ctr="1";
               
                BigInteger.toBinaryString(n);
                if(BigInteger.bitCount(n)>1){
                    ctr=repeat("0",BigInteger.length()-2);
                    counter=N-BigInteger.parseInt(ctr,2);
                }
                else counter=N.divide(two);
                winner++;
            }
            turns(winner);
        }
    }
    
}
