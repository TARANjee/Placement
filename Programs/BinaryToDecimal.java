public class BinaryToDecimal {
    public static void main(String[] args) {
        int n = 10101, i = 0, ans = 0, rem = 0;
        while (n != 0) {

            rem = n % 10;
            if (rem == 1)
                ans = (int) ((Math.pow(2, i)) + ans);
            n = n / 10;
            i++;

        }
        System.out.println(ans);
    }
}
