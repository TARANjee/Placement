
public class FindMountainArray {
    public static void main(String[] args) {
        int arr[] = { 0,1,2,4,2,1};
        int n = arr.length, k = 3;

        int start = 0, end = n - 1;
        int mid = start + (end - start) / 2;
        int ans = -1;
        while (start < end) {
            if (arr[mid] < arr[mid + 1]) {
                ans = mid + 1;
                start = mid + 1;

            } else {
                ans = mid;
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
        System.out.println(arr[ans]);
        int first = firstOcc(arr, ans, k);
        int second = lastOcc(arr, ans, n, k);

        if (first == -1 && second == -1)
            System.out.println(-1);
        else if (first != -1)
            System.out.println(first);
        else
            System.out.println(second);
    }

    public static int firstOcc(int arr[], int n, int k) {
        System.out.println("firstOccc");
        int start = 0, end = n - 1;
        int mid = start + (end - start) / 2;

        while (start <= end) {
            if (arr[mid] == k) {
                return mid;

            } else if (k < arr[mid]) {
                end = mid - 1;
            } else
                start = mid + 1;

            mid = start + (end - start) / 2;
        }
        return -1;
    }

    public static int lastOcc(int arr[], int st, int n, int k) {
        System.out.println("laastocc");
        int start = st, end = n - 1;
        int mid = start + (end - start) / 2;

        while (start <= end) {
            if (arr[mid] == k) {
                return mid;

            } else if (k < arr[mid]) {
                start = mid + 1;

            } else
                end = mid - 1;

            mid = start + (end - start) / 2;
        }
        return -1;
    }

}
