public class Sort01 {
    public static void main(String[] args) {
        int arr[] = { 0,0,1,0,1,1,1,1,0,0};
        int n = arr.length;
        for (int i = 0, j = n - 1; i < j;) {
           
            if (arr[i] == 0 && arr[j] == 0) {
                i++;

            } 
            else if (arr[i] == 1 && arr[j] == 1) {
                j--;

            }else {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
            
        }
        for (int k : arr) {
            System.out.print(k + " ");
        }
    }
}
