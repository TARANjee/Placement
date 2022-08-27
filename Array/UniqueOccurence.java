// arr[]={1,2,2,1,1,3}
//1->3 ,2->2 ,3-.1 
//3=2=1 return false if not true
public class UniqueOccurence {
    public static void main(String[] args) {
        int arr[]={5,5,6,6,5,4};
        System.out.println(unique(arr));
    }
    public static boolean unique(int arr[]){
    int uni=0,n=arr.length-1,i=0;
        while(i>n-i) {
          
            int temp = arr[i];
            arr[i] = arr[n-i];
            arr[n-i] = temp;
            i++;
        }
        
       for (int j : arr) {
        System.out.print(j+" ");
       }
        return true;
    }
}
