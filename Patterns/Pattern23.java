/*
   1
  121
 12321
1234321
 */
public class Pattern23 {
    public static void main(String[] args) {
        int n = 4;

        for (int i = 1; i <= n; i++) {
            int space = n - i;
            while (space > 0) {
                System.out.print(" ");
                space--;

            }

            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }
            int k = i-1;
            while (k >0) {
                System.out.print(k);
                k--;
            }

            System.out.println();
        }
    }
}
