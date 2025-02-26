package recursion;

public class Tail {
  public static void print(int a)
{
    if (a < 1){
        return;
     } else
    {
        System.out.println(a);

        print(a / 2);
    }
}
    public static void main(String[] args) {
    
        Tail obj = new Tail(); 
        obj.print(10);  
    }
}
