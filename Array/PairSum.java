// Sample Input 1:
// size=5 tar=5
// 1 2 3 4 5
// Sample Output 1:
// [1 4],
// [2 3]

import java.util.ArrayList;
public class PairSum {
    public static void main(String[] args) {
        ArrayList<Integer> arr=new ArrayList<Integer>();
        arr.add(2);
        arr.add(-3);
        arr.add(3);
        arr.add(3);
        arr.add(-2);
   
        int tar=0;
        ArrayList<ArrayList<Integer>> c=pair(arr, tar);
        for (ArrayList<Integer> i : c) {
            System.out.println(i+" ");
          }
        
    }
    public static ArrayList<ArrayList<Integer>> pair(ArrayList<Integer> arr,int tar) {
        ArrayList<ArrayList<Integer>> ans= new ArrayList<ArrayList<Integer>>();
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i+1; j < arr.size(); j++) {
                if(arr.get(i)+arr.get(j)==tar){
                    ArrayList<Integer> temp= new ArrayList<Integer>();
                    temp.add(Math.min(arr.get(i), arr.get(j)));
                    temp.add(Math.max(arr.get(i), arr.get(j)));
                    ans.add(temp);
                  
                }
            }
        }
     
        return ans;
    }
}
