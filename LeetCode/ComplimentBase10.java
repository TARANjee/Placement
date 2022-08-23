public class ComplimentBase10 {
    public static void main(String[] args) {
        int n = 8;
        int m = n;
        int mask = 0;
        while (m != 0) { // 1st mask=0000...0000 << 0000...0001 m=000..0100 soo on
            mask = (mask << 1) | 1; // mask=1111
            m = m >> 1;
        }
        System.out.println("~n:" + ~n);
        int res = (~n) & mask; // 1111...0111 & 0000...1111 =7

        System.out.println("Result:" + res);
    }
}
