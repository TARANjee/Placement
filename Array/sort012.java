
public class sort012 {
    public static void main(String[] args) {
        int arr[] = { 0 ,1 ,2 ,1 ,2 ,1 ,2 };
        int n = arr.length;

        for (int i = 0, j = i + 1, k = n - 1; j<= k;) {
            System.out.println(arr[i] + " " + arr[j] + " " + arr[k]);
            if (arr[i] == 0) {
                i++;
                j++;
            } else if (arr[i] == 1 && arr[j] == 0) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
        
            } else if (arr[i] == arr[j] && arr[i] < arr[j]) {

                
                j++;
            } else if (arr[i] < arr[j] && arr[i] ==arr[k]) {
               k--;
            }
            else{
                
               k--;
            }

        }
        for (int l : arr) {
            System.out.print(l + " ");
        }

    }

}
