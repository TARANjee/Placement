
public class SubProdSum {
    public static void main(String[] args) {
        int n = 234, rem = 0, p = 0;
        int sum = 0, prod = 1;

        while (n > 0) {
            rem = n % 10;

            sum = sum + rem;
            prod = prod * rem;
            
            n = n / 10;
        }
        System.out.println("prod="+prod+"sum="+sum);
        System.out.println("Result="+(prod-sum));
    }
}
