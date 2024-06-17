import java.util.*;
class Convertor{
    public String toBinary(int decimal){
        String result="";
        while(decimal!=0){
            int a=(decimal&1);
            decimal=decimal>>1;
            result=a+result;
        }
        return result;
    }
}
public class Main{
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a Decimal Number to get into Binary form:-> ");
        int n=sc.nextInt();
        Convertor convertor=new Convertor();
        String res=convertor.toBinary(n);
        System.out.println(res);
        
        
    }
}
