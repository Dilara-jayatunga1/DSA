package recursion;

public class Recursion {
    static int sum(int x){
        int s;
        if(x == 1){
            return x;
        } else {
            s = x + sum(x - 1);
            return s;
        }
    }
    
    public static void main(String[] args) {
        int a;
        a = sum(5);
        System.out.println("Sum of 5 is " + a);
    }
}
    
