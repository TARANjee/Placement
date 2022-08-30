public class FindIndexMountainPeak {
    public static void main(String[] args) {
        int arr[]={1,2,3,4,5,3,1};
        int n=arr.length,k=3;
        int m=mountainPeak(arr, n,k);
        System.out.println(m);
    }
    public static int mountainPeak(int arr[], int n,int k) {
        int start = 0, end = n - 1;
        int mid = start + (start+end) / 2;
        int ans = -1;
        while (start <= end) {
            if (arr[mid]<arr[mid+1]) {
                ans = mid+1;
                start=mid+1;}
            else if (arr[mid]>arr[mid+1]){ 
                ans = mid;
                end=mid-1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    }
}
      
    
