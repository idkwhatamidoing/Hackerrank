import java.io.*;
import java.util.*;

public class Solution {
    
    private static int rm, cm, rp, cp;
    
    public static void nextMove(int n, int r, int c, char[][] grid){  
            if (r>rp){
               System.out.println("UP"); 
			         r--;
            }
            else if (r<rp){
               System.out.println("DOWN"); 
			         r++;
            }
            else if (c>cp){
                System.out.println("LEFT"); 
				        c--;
            }
            else if (c<cp){
                System.out.println("RIGHT"); 
				        c++;
            }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        char[][] matrix = new char[N][N];
        
        rm = in.nextInt();
        cm = in.nextInt();
        
        in.nextLine();
        String temp;
        
        for (int i=0; i<N; i++){
            temp  = in.nextLine();
            for (int j=0; j<N; j++){ 
                matrix[i][j] = temp.charAt(j);
                if (matrix[i][j]=='p'){
		              rp=i;
	                cp=j;
				        }
            }
        }
    nextMove(N,rm,cm,matrix);
  }
}
