import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a Decimal Number to Convert it into Binary:-> ");
        int n=sc.nextInt();
        int nn=n;
        String result="";
        while(n!=0){
            int x=n%2;
            n/=2;
            result=x + result;
        }
        System.out.print("This is the Following Binary Number of the "+nn+" is :-> "+result);
    }
}
