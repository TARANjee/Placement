public class SearchTheRotatedArray {
    public static void main(String[] args) {
        int arr[] = { 8 ,1, 2, 3};
        int key = 8;
        // return index
        int n = arr.length;
        int start = 0, end = n - 1;
        int mid = start + (end - start) / 2;

        while (start < end) {
            if (arr[mid] >= arr[0]) {
                start = mid + 1;

            } else {
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
        int first = binarySearch(arr, 0, start, key);
        int second = binarySearch(arr, start, n, key);
      
        if (first == -1 && second == -1) {
            System.out.println(-1);
        }
        if (first != -1)
            System.out.println(first);
        if (second != -1) {
            System.out.println(second);
        }
    }

    private static int binarySearch(int arr[], int s, int n, int key) {
        int start = s, end = n - 1;
        int mid = start + (end - start) / 2;

        while (start <= end) {
            if (arr[mid] == key) {
                return mid;

            } else if (arr[mid] < key) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return -1;
    }
}
