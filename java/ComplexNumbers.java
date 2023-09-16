import java.util.* ;
import java.io.*; 
import java.util.Scanner;

class ComplexNumbers{
	
	// Write your code here
	int r,i;
	ComplexNumbers(int r, int i){
		this.r=r;
		this.i=i;
	}
	void Add(ComplexNumbers c){
		r=r+c.r;
		i=i+c.i;
	}

	void Mul(ComplexNumbers c){
		int t1=r*c.r - i*c.i;
		int t2=r*c.i + i*c.r;
		r=t1;
		i=t2;
	}
	void print(){
		System.out.println(r+" + i"+i);
	}	
}

class Solution {
	
	public static void main(String args[]) {
		
		// Write your code here
		Scanner sc = new Scanner(System.in);
		int r=sc.nextInt();
		int i=sc.nextInt();
		ComplexNumbers c1=new ComplexNumbers(r, i);

		r=sc.nextInt();
		i=sc.nextInt();
		ComplexNumbers c2=new ComplexNumbers(r, i);

		int n=sc.nextInt();
		if(n==1){
			c1.Add(c2);
			c1.print();
		}else if(n==2){
			c1.Mul(c2);
			c1.print();
		}

	    
	}
}
		
