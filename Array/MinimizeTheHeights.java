import java.util.Arrays;
import java.lang.Math;

public class MinimizeTheHeights {
    public static void main(String[] args) {
        int arr[] = { 2, 6, 3, 4, 7, 2, 10, 3, 2, 1 };// 7,11,8,9,12,7,5,8,7,6

        int n = arr.length, k = 5;

        int height = minHeight(arr, n, k);

        System.out.println(height);
    }

    public static int minHeight(int arr[], int n, int k) {
        Arrays.sort(arr);
        int min_ = arr[0];
        int max_ = arr[n - 1];
        int res = max_ - min_;

        for (int i = 1; i < n; i++) {
            if (arr[i] - k < 0)
                continue;

            max_ = Math.max(arr[i - 1] + k, arr[n - 1] - k);
            min_ = Math.min(arr[0] + k, arr[i] - k);
            res = Math.min(res, max_ - min_);
            
        }
       
        return res;

    }
}
