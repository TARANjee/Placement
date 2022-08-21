import java.util.Arrays;

// 1. sort 2. cnt acc to kth eement
public class kthMinMaxArray {
    public static void main(String[] args) {
        int arr[]={1,4,3,9,0},k=2;
        Arrays.sort(arr);
        for (int i : arr) {
            System.out.print(i+" ");
        }
        System.out.println();
        System.out.println("min="+arr[k-1]);
        System.out.println(" max "+arr[arr.length-k]);
    }
}
