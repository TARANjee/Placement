public class Paindrome {
    public static void main(String[] args) {
        int x=123;
        int rev=0,n=x;
        while(x>0){
            int rem=x%10;
            rev=(rev*10)+rem;
            x=x/10;
        }
        
        System.out.println(n==rev);
    }
}
