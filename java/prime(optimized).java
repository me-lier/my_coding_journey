import java.util.*;
public class Main
{
    static boolean isPrime(int n){
        if(n<=0 || n==1) return false;
        if(n==2 || n==3) return true;
        if(n%2==0 || n%3==0) return false;
        for(int i=5; i<=Math.sqrt(n); i=i+6){
            if(n%i==0) return false;
        }
        return true;
        
    }
	public static void main(String[] args) {
	   // Scanner sc=new Scanner(System.in);
// 		System.out.print("Enter a Number to get Whether the Number is Prime or Not:-> ");
// 		int n=sc.nextInt();
		for(int i=0; i<=100; i++){
		    if(isPrime(i)){
		        System.out.println(i+"Yes");
		    }else{
		        System.out.println(i+"No");
		    }
		}
	}
}
