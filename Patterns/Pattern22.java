/*
          1 
        2 3 
      4 5 6 
    7 8 9 10
 */
public class Pattern22 {
    public static void main(String[] args) {
        int n = 4;
        int k = 1;
        for (int i = 1; i <= n; i++) {
            int space = n - i;
            while (space > 0) {
                System.out.print("  ");
                space--;

            }

            for (int j = 1; j <= i; j++) {

                System.out.print(k + " ");
                k++;
            }

            System.out.println();
        }
    }
}
