/*
    A B C 
    A B C 
    A B C 

 */
public class Pattern11 {
    public static void main(String[] args) {
        int n = 3;
        for (int i = 1; i <= n; i++) {

            for (int j = 1; j <= n; j++) {
                char ch = (char) ('A' + j - 1);
                System.out.print(ch + " ");
            }

            System.out.println();
        }
    }
}
