import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        int f,r;
        String d="";
        
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        
        for(int a0 = 0; a0 < t; a0++){
            d="";
            int n = in.nextInt();
            
            if(n==1 || n==2) d="-1";
            
            else{
                f=n/3;
                r=n%3; 
                if(r!=0){
                    f-=1;
                    r+=3;
                    while(r%5!=0){
                        f-=1;
                        r+=3;
                    }
                }
                for(int a1=0; a1<f; a1++) d+="555";
                for(int a2=0; a2<(r/5); a2++)  d+="33333";
             }   
             System.out.println(d);
        } 
    }
}
