
public class BitwiseOperation {
    public static void main(String[] args) {
        int a = 4;
        int b = 6;

        System.out.println("a=" + a + "\nb=" + b);
        // logical AND , OR ,XOR ,NOT
        System.out.println("\na&b=" + (a & b));
        System.out.println("\na|b=" + (a | b));
        System.out.println("\na^b=" + (a ^ b));
        System.out.println("\n~a=" + (~a));
        // Left Shift and Right Shift
        System.out.println("\n17>>1=" + (17 >> 1));
        System.out.println("\n17>>2=" + (17 >> 2));
        System.out.println("\n19<<1=" + (19 << 1));
        System.out.println("\n21<<2=" + (21 << 2));

       
    }
}
