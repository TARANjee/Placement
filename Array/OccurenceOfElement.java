public class OccurenceOfElement {

    public static void main(String[] args) {
        int arr[] = { 0, 1, 2, 2, 3, 3, 3, 5 };
        int n = arr.length, k = 3;
        int firstOc = firstOcc(arr, n, k);
        int lastOc = lastOcc(arr, n, k);
        System.out.println("Total no.of Occurence:" + (lastOc - firstOc + 1));
    }

    public static int firstOcc(int arr[], int n, int k) {
        int start = 0, end = n - 1;
        int mid = start + (start + end) / 2;
        int ans = -1;
        while (start <= end) {
            if (arr[mid] == k) {
                ans = mid;
                end = mid - 1;
            } else if (k < arr[mid]) {
                end = mid - 1;
            } else
                start = mid + 1;

            mid = start + (end - start) / 2;
        }
        return ans;
    }

    public static int lastOcc(int arr[], int n, int k) {
        int start = 0, end = n - 1;
        int mid = start + (end - start) / 2;
        int ans = -1;
        while (start <= end) {
            if (arr[mid] == k) {
                ans = mid;
                start = mid + 1;
            } else if (k < arr[mid]) {
                end = mid - 1;
            } else
                start = mid + 1;

            mid = start + (end - start) / 2;
        }
        return ans;
    }
}
