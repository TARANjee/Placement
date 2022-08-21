/*
   D 
   C D 
   B C D 
   A B C D 
 */
public class Pattern17 {
  public static void main(String[] args) {
    int n = 4;

    for (int i = 1; i <= n; i++) {
      char start = (char) ('A' + n - i);
      for (int j = 1; j <= i; j++) {

        System.out.print(start + " ");
        start++;
      }

      System.out.println();
    }
  }
}
