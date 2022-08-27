public class BitInSetOfTwo {
    public static void main(String[] args) {
        int a = 7, b = 3;
        int tot=bits(a)+ bits(b);
        System.out.println("Total  number's of seet bits in a&b:"+tot);
    }

    public static int bits(int a) {

        int count = 0;
        while (a != 0) {
            if ((a & 1) == 1) {
                count++;

            }
            a = a >> 1;
        }

        return count;
    }
}
