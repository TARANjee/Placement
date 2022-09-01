// arr[]={7,8,9,2,3} find min element with binary search
//ans is 3 is index element is 2
public class FindPivotInArray {
    public static void main(String[] args) {
        int arr[] = { 4,7,8,10,1,3 };
        int n = arr.length;
        int start = 0, end = n - 1;
        int mid = start + (end - start) / 2;

        while (start < end) {
            if (arr[mid] >=arr[0]) {
                start = mid + 1;
            } else {
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
        System.out.println("pivot is :"+start);
    }
}
