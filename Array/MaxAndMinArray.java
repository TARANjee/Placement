public class MaxAndMinArray {
    public static void main(String[] args) {

        int arr[] = { -45,77,10,64,99 };
        searchMaxAndMin(arr);

    }

    private static void searchMaxAndMin(int arr[]) {
        int min = arr[0], max = 0;
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max)
                max = arr[i];

            if (arr[i] < min)
                min = arr[i];

        }
        System.out.println("minimum:" + min + "\nMaximum:" + max);
    }

}