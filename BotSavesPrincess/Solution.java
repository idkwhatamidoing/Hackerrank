import java.io.*;
import java.util.*;

public class Solution {
    
    private static int rm, cm, rp, cp;
    
    public static void displayPathtoPrincess(int n, char[][] grid){
        
        while (rm!=rp || cm!=cp){
            if (rm>rp){
               System.out.println("UP"); 
			         rm--;
            }
            else if (rm<rp){
              System.out.println("DOWN"); 
			        rm++;
            }
            if (cm>cp){
              System.out.println("LEFT"); 
				      cm--;
            }
            else if (cm<cp){
              System.out.println("RIGHT"); 
				      cm++;
            }
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        char[][] matrix = new char[N][N];
        
        in.nextLine();
        String temp;
        
        //store characters, get position of m and p
        for (int i=0; i<N; i++){
            temp  = in.nextLine();
            for (int j=0; j<N; j++){ 
                matrix[i][j] = temp.charAt(j);
                if (matrix[i][j]=='m'){
                    rm=i;
		                cm=j;
				        }
                else if (matrix[i][j]=='p'){
		                rp=i;
	                  cp=j;
				        }
            }
        }
    displayPathtoPrincess(N,matrix);
    }
}
