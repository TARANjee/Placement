public class Duplicate {
    public static void main(String[] args) {
        int arr[] = { 2,5,9,6,9,3,8,9,7,1 };
        int n=arr.length;;
        int num=0;
        for(int i=0;i<n;i++){
            num=num^arr[i];
        }
        for (int i = 1; i < n; i++) {
            num=num^i;
        }
        
        System.out.println(num);
    }
}
