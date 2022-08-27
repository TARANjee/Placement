// same question
//Power of 3,Power of 4

public class PowerOfTwo {
    public static void main(String[] args) {
        int n = 10245;
        System.out.println(power(n));

    }

    public static boolean power(int n) {
        // for (int i = 0; i <= 30; i++) {
        //     int res = (int) (Math.pow(2, i));
        //     if (res == n) {
        //         return true;
        //     }
        // }
        
        for (int i = 0; i <30; i++) {
            if(n%2==0 ||n==Math.pow(2,i) ){
                return true;
            }
        }
        return false;
    }
}
