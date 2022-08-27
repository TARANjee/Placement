public class UniqueNumber {
    public static void main(String[] args) {
        int arr[]={1,2,3,5,5,2,10,3,1};
        int uni=0;
        for (int i = 0; i < arr.length; i++) {
            uni ^=arr[i];
        }
        System.out.println(uni);
    }
}
