public class PrimeNumber {
    public static void main(String[] args) {
        int n = 941;
        int isPrime = 1;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
              
                isPrime = 0;
                break;
            }

        }
        if (isPrime == 1)
            System.out.println("prime");
        else
            System.out.println("not prime");
    }
}
