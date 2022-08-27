// nCr= 5C2=5!/2!*(5-2)!
public class NCR {
    public static void main(String[] args) {
        int n = 10,r=2;
        int c=ncr(n, r);
        
        System.out.println(c);
    }

    public static int factorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }
    public static int ncr(int n,int r){
        int num = factorial(n);
        int denom = factorial(r)*factorial(n-r);
       
        return num/denom;
    } 
}
