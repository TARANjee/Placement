public class ReverseInteger {
    public static void main(String[] args) {
        int n = 1216144535;
        int reverse = rev(n);
        System.out.println(reverse);
    }

    public static int rev(int n) {
        int rev = 0;
        while (n != 0) {
            int rem = n % 10;
            if (rev > Integer.MAX_VALUE / 10 || rev < Integer.MIN_VALUE / 10)
                return 0;
            rev = rev * 10 + rem;
            n = n / 10;
        }
        return rev;
    }
}
