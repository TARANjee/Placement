/*  4 3 2 1
    4 3 2 1
    4 3 2 1
    4 3 2 1
*/
public class Pattern2 {
    public static void main(String[] args) {

        int rows = 4, col = 4;
        int i = 0, j = 0;
        while (i < rows) {
            j = 1;
            while (j <= col) {
                System.out.print(col - j + 1 + " ");
                j++;
            }
            System.out.println();
            i++;
        }
    }
}
