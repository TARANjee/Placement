public class AlternativeSwap {
    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 5, 6,8 };
        int n = 6;
        for (int i = 0; i < n; i = i + 2) {
            int j = i + 1;
            if (j < n) {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
        System.out.println();
        for (int i : arr) {
            System.out.print(i + " ");
        }
    }
}
