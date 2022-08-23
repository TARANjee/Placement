/*
    1234554321
    1234**4321
    123****321
    12******21
    1********1
 */
public class Pattern24 {
    public static void main(String[] args) {
        int n = 5,j;
        for (int i = 1; i <= n; i++) {
            for (j = 1; j <= n - i + 1; j++) {
                System.out.print(j);
            }
            int k=2;
            while(k<i*2)
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
