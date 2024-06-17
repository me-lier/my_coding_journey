import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a Decimal Number to Convert it into Binary:-> ");
        int n=sc.nextInt();
        int nn=n;
        int arr[]=new int[8];
        int i=arr.length-1;
        while(n!=0){
            int x=n%2;
            arr[i--]=x;
            n/=2;
        }
        System.out.print("This is the Following Binary Number of the "+nn+" is :-> ");
        for(int ele:arr){
            System.out.print(ele);
        }
    }
}
