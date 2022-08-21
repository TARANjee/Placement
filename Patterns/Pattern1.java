
/* 1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4
*/
public class Pattern1 {
    public static void main(String[] args) {
        int n = 4;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= n; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}
