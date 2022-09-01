// without sorting ago
public class ZeroOneTwoSort {
    public static void main(String[] args) {
        int arr[] = { 1, 1, 0, 1, 2, 2, 0 };
        int zero, one;
        zero = one = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 0) {
                zero++;
            } else if (arr[i] == 1) {
                one++;
            }

        }
        for (int i = 0; i < zero; i++) {
            arr[i] = 0;
        }
        for (int i = zero; i < zero + one; i++) {
            arr[i] = 1;
        }
        for (int i = zero + one; i < arr.length; i++) {
            arr[i] = 2;
        }

        for (int i : arr) {
            System.out.print(i + " ");
        }
    }
}
