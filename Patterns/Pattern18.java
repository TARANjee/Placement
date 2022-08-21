/*
       *
      **
     ***
    ****
 */
public class Pattern18 {
    public static void main(String[] args) {
        int n = 4;

        for (int i = 1; i <= n; i++) {
            int space = n - i;
            while (space>=1) {
                System.out.print(" ");
                space--;
            }
            for (int j = 1; j <= i; j++) {

                System.out.print("*");

            }

            System.out.println();
        }
    }
}
