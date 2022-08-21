// Kadane's Ago if sum is less zero the set it zero so maximum sum gets 
// Complexity O(N)
public class LargestSubArray {
    public static void main(String[] args) {
        int arr[] = { -4,-3,-2,-1 };
        int maxsum = -32600, sum = 0, n = arr.length - 1;
        for (int i = 0; i < n; i++) {

            sum += arr[i];
            if (sum > maxsum) {
                maxsum = sum;
            }
            
            if (sum < 0 )
                sum = 0;

        }
        System.out.println("maxsum:" + maxsum);
    }
}
