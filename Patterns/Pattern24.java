public class Pattern24 {
    public static void main(String[] args) {
        int n = 5,j;
        for (int i = 1; i <= n; i++) {
            for (j = 1; j <= n - i + 1; j++) {
                System.out.print(j);
            }
            int k=1;
            while(k<=i-1)
            {
                System.out.print("*");
                k++;
            }
             k=1;
            while(k<=i-1)
            {
                System.out.print("*");
                k++;
            }
            for (int l = j-1; l >= 1; l--) {
                System.out.print(l);
            }
            System.out.println();

        
        }

    }
}
