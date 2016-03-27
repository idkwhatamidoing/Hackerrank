import java.io.*;
import java.util.*;

public class Solution {
    //repeat method taken from StackOverflow
    public static String repeat(String str, int times) {
        return new String(new char[times]).replace("\0", str);
    }
    public static void main(String[] args) {
        int f,r;
        String d="",temp="";
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        
        for(int a0 = 0; a0 < t; a0++){
            d="";
            int n = in.nextInt();
            
            if(n==1 || n==2) d="-1";
            else if (n<10 && n%3==1) d="-1";
            else{
                f=n/3;
                r=n%3;
                if(r!=0){
                    f-=1;
                    while((r+=3)%5!=0) f-=1;
                }
                d=repeat("555",f);
                temp=repeat("33333",r/5);
             }   
             System.out.println(d+temp);
        } 
    }
}
