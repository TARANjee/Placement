//[1,6,2,9,7]-> [7,1,6,2,9]
public class RotateByOne {
    public static void main(String[] args) {
        int arr[]={1,6,2,9,7};
        int n=arr.length;

        int last=arr[n-1];
        for (int i =n-1; i >0; i--) {
            arr[i]=arr[i-1];
        }
        arr[0]=last;
        for (int i : arr) {
            System.out.print(i+" ");
        }
    }
}
