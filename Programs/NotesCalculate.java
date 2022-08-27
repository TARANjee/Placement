

public class NotesCalculate {
    public static void main(String[] args) {
        int num = 5094, hundred, fifty, twenty, one;
        hundred = fifty = twenty = one = 0;
        switch (num) {
            default:
                hundred = num / 100;
                num=num%100;
            case 50:
                fifty = num / 50;
                num=num%50;
            case 20:
                twenty = num / 20;
                num=num%20;
            case 1:
                one = num / 1;
        }
        System.out.println("100:" + hundred);
        System.out.println("50:" + fifty);
        System.out.println("20:" + twenty);
        System.out.println("1:" + one);
    }
}
