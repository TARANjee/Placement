/*
    A A A
    B B B
    C C C
 */
public class Pattern10 {
    public static void main(String[] args) {
        int n = 3;
        for (int i = 1; i <= n; i++) {

            for (int j = 1; j <= n; j++) {
                char ch = (char)('A' + i - 1);
                System.out.print(ch+" ");
            }

            System.out.println();
        }
    }
}
