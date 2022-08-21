/*
   A 
   B C 
   C D E 
   D E F G   
 */
public class Pattern16{
    public static void main(String[] args) {
        int n = 4;
        
        for (int i = 1; i <= n; i++) {
           
            for (int j = 1; j <= i; j++) {
              System.out.print((char)('A'+i+j-2)+" ");
              
            }

            System.out.println();
        }
    }
}
