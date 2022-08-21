import java.util.ArrayList;

public class UnionAndIntersection {
    public static void main(String[] args) {
        int a[] = { 1, 1, 2, 4, 5, 7, 9 }, n = a.length;
        int b[] = { 2, 2, 3, 4, 5, 8, 10 }, m = b.length;
        ArrayList<Integer> union = union(n, m, a, b);
        ArrayList<Integer> intersection = intersection(n, m, a, b);
        display(union, "union");
        System.out.println();
        display(intersection, "intersection");

    }

    private static ArrayList<Integer> intersection(int n, int m, int[] a, int[] b) {
        int i, j;
        ArrayList<Integer> ilist = new ArrayList<Integer>();
        for (i = 0, j = 0; i < n && j < m;) {
            if (a[i] == b[j]) {
                if (ilist.size() > 0 && ilist.get(ilist.size() - 1) != a[i])
                    ilist.add(a[i]);
                else if (ilist.size() == 0)
                    ilist.add(a[i]);
                i++;
                j++;
            } else if (a[i] < b[j]) {

                i++;
            } else {

                j++;
            }
        }
        return ilist;
    }

    private static void display(ArrayList<Integer> list, String ele) {
        System.out.println(ele);
        for (int k : list) {
            System.out.print(k + " ");
        }
    }

    public static ArrayList<Integer> union(int n, int m, int a[], int b[]) {
        int i, j;
        ArrayList<Integer> ulist = new ArrayList<Integer>();
        for (i = 0, j = 0; i < n && j < m;) {
            if (a[i] == b[j]) {
                if (ulist.size() > 0 && ulist.get(ulist.size() - 1) != a[i])
                    ulist.add(a[i]);
                else if (ulist.size() == 0)
                    ulist.add(a[i]);
                i++;
                j++;
            } else if (a[i] < b[j]) {
                if (ulist.size() > 0 && ulist.get(ulist.size() - 1) != a[i])
                    ulist.add(a[i]);
                else if (ulist.size() == 0)
                    ulist.add(a[i]);
                i++;
            } else {
                if (ulist.size() > 0 && ulist.get(ulist.size() - 1) != b[j])
                    ulist.add(b[j]);
                else if (ulist.size() == 0)
                    ulist.add(a[i]);
                j++;
            }
        }
        while (i < n) {
            if (ulist.size() > 0 && ulist.get(ulist.size() - 1) != a[i])
                ulist.add(a[i]);

            i++;

        }
        while (j < m) {
            if (ulist.size() > 0 && ulist.get(ulist.size() - 1) != b[j])
                ulist.add(b[j]);

            j++;
        }
        return ulist;
    }
}
