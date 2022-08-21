/** Reverse the array  */
public class ReverseArray {
public static void main(String[] args) {
    int arr[]={7,2,9,4,1};
    int n=arr.length;
    int start=0,end=n-1;
    for (; start<end; start++,end--) {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

    }
    for (int i : arr) {
        System.out.print(i+" ");
    }
}
    
}