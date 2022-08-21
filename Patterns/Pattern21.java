/*
    ****
     ***
      **
       *
 */
public class Pattern21 {
    public static void main(String[] args) {
        int n = 4;

        for (int i = 1; i <=n; i++) {
             int space=i-1;
            while(space>0){
                System.out.print(" ");
                space--;

            }
           
            for (int j = i; j <= n; j++) {
                
              System.out.print(j);

            }

            System.out.println();
        }
    }
}
