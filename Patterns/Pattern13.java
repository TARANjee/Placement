/*
    A B C 
    B C D 
    C D E 
 */
public class Pattern13{
    public static void main(String[] args) {
        int n = 3;
        char ch ;
        for (int i = 1; i <= n; i++) {
            ch =(char)('A'+i-1);
            for (int j = 1; j <= n; j++) {
              
                System.out.print( ch+ " "); // ( 'A'+i+j-2)
              ch++;
            }

            System.out.println();
        }
    }
}
