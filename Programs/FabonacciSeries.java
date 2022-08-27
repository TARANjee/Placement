
public class FabonacciSeries {
    public static void main(String[] args) {
        int n = 5;
        System.out.println(fabonacci(n));
        int arr[] ={1,2};
        
        
        for (int i = 0; i < 2 ; i++){
           System.out.print(arr[i]);
        }
    }

    public static int fabonacci(int n) {
        int a = 0;
        int b = 1, c = 0;
        for (int i = 1; i <= n - 2; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}
