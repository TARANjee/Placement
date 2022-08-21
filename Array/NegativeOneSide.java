
public class NegativeOneSide {
    public static void main(String[] args) {
        int arr[]={-1,8,6,-2,-7,9};
        int j=0;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i]<0){  // if number is negative
                if(i != j){ // negative number swap by positive number
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
                j++;
            }
        }
        for (int i : arr) {
            System.out.print(i+" ");
        }
    }
}
