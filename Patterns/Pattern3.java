/* 
    1 2 3
    4 5 6
    7 9 8
 */

public class Pattern3 {
    public static void main(String[] args) {
        int n = 3, k = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(k + " ");
                k++;
            }
            System.out.println();
        }
    }
}
