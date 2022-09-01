public class SquareRoot {
    public static void main(String[] args) {
        int x=101;
        int tempRoot=sqrt(x);
        System.out.println(pointValues(tempRoot,x,5));
        
    }
    private static double pointValues(int tempRoot,int n,int pointdig){
        double factor=1;
        double ans=tempRoot;
        for (int i = 0; i <pointdig ; i++) {
            factor=factor/10;
            for (double j = ans; j*j<n ; j=j+factor) {
                ans=j;
            }
        }
        return ans;
    }
    private static int sqrt(int x){
        int start = 0, end = x - 1;
        int ans=0;
        int mid = start + (end - start) / 2;
        while(start<=end){
            if(mid*mid>x){
                end=mid-1;
                
            }
            else if(mid*mid==x){
                ans=mid;
                break;
            }
            else {
                start=mid+1;
                ans=mid;
            }
            
            mid = start + (end - start) / 2;
        }
        return ans;
    }
}
