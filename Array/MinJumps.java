/*
Input:
N = 11 
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
Output: 3 
Explanation: 
First jump from 1st element to 2nd 
element with value 3. Now, from here 
we jump to 5th element with value 9, 
and from here we will jump to the last. */

public class MinJumps {
    public static void main(String[] args) {
        int arr[] = {2,5,0,0} ;
        int n = arr.length;
        int min = jumps(arr, n);
       
        System.out.println("counter:"+min);
    }

    public static int jumps(int arr[], int n) {
        int cnt = 0;
        
        for (int i = 0; i <n-1;) {
          
            if(arr[i]==0)
                return -1;
            if (i < n)
                i = i + arr[i];
             
            else {
                return cnt;
            }
            cnt++;

        }
        return cnt;
    }
}
