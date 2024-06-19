import java.util.*;
public class Arrays{
    private int arr[];
    private int currentIndex;

    public void Initialize(int size){
        this.arr=new int[size];
        this.currentIndex=0;
    }

    public void Insert(int n){
        if(this.arr.length==currentIndex){
            int temp[]=new int[this.arr.length*2];
            for(int i=0; i<currentIndex; i++){
                temp[i]=this.arr[i];
            }
            this.arr=temp;
        }
        this.arr[currentIndex++]=n;
    }

    public StringBuilder print(){
        StringBuilder str=new StringBuilder();
        str.append("[");
        for(int ele: this.arr){
            str.append(ele).append(", ");
        }
        str.append("\b").append("\b").append("]");
        return str;
    }

    public int indexOf(int k){
        for(int i=0; i<currentIndex; i++){
            if(k==arr[i]) return i;
        }
        return -1;
    }

    public int Max(){
        int max=this.arr[0];
        for(int i=1; i<currentIndex; i++){
            if(max<this.arr[i]) max=this.arr[i];
        }
        return max;
    }

    public int Min(){
        int min=this.arr[0];
        for(int i=1; i<currentIndex; i++){
            if(min<this.arr[i]) min=this.arr[i];
        }
        return min;
    }

    public void removeAt(int idx){
        if(idx >= this.currentIndex) throw new IllegalArgumentException();
        for(int i=idx; i<currentIndex; i++){
            this.arr[i]=this.arr[i+1];
        }
        this.arr[currentIndex]=0;
        currentIndex--;
    }

    public void Reverse(){
        int i=0;
        int j=currentIndex-1;
        while(i<j-1){
            int temp=this.arr[i];
            this.arr[i]=this.arr[j];
            this.arr[j]=temp;
            i++;
            j--;
        }
    }
    
    public static void main(String[] args) {

        // Dynamic Array
        List<Integer> aray=new ArrayList<Integer>();
        aray.add(1);
        System.out.println(aray);
        System.out.print("Enter The Size of the Array to initialize:-> ");
        // Scanner sc=new Scanner(System.in);
        // int size=sc.nextInt();
        Arrays a=new Arrays();
        a.Initialize(5);
        a.Insert(1);
        a.Insert(2);
        a.Insert(3);
        a.Insert(4);
        a.Insert(5);
        a.Insert(6);
        a.Reverse();
        System.out.println(a.print());
        
    }
}
