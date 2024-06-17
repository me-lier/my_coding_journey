import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a Decimal Number to get Even Or Odd:-> ");
        int n=sc.nextInt();
        if((n & 1)==0){
            System.out.println("Even");
        }else{
            System.out.println("Odd");
        }
    }
}
