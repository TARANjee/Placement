
public class DecimalToBinary {
   
    public static void main(String[] args) {
        Integer n = 16, bit = 0, rev = 0, i = 0,num=n;
        while (n != 0) {
        bit = n&1;
        rev=(int) ((bit * Math.pow(10,i) )+rev);
        n=n>>1;
        i++;

        }
        System.out.println(num+"-->"+rev);
    }
    //     if (num < 0) {
    //        n = -(num);
    //     }
    //     while (n != 0) {
    //         bit = n & 1;
    //         rev = (int) ((bit * Math.pow(10, i)) + rev);
    //         n = n >> 1;
    //         i++;
    //         dig++;

    //     }
    //     System.out.println(rev);
    //     //1's compliment
    //     Integer j=0,sum=0;
    //     while(j<dig)
    //     {
    //         sum =sum*10+1;
    //         j++;
    //     }
    //     Integer comp=rev^sum;
    //     Integer one=comp|1;
    //     comp=one^sum;
    //     System.out.println("sum"+sum+"\n commp:"+-comp);
    //     System.out.println(Integer.MAX_VALUE);
    // }
}
