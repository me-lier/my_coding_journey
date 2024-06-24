// import java.util.*;
class Node{
    public int data;
    public Node next;
    public Node(int n){
        this.data=n;
    }
    public Node(){};
}
public class LinkedList{
    private Node head;
    private Node tail;

    public LinkedList(){
        head=null;
        tail=null;
    }
    
    void Insertion(int n){
        Node t=new Node();
        t.data=n;
        t.next=null;

        if(this.head==null){
            head=t;
            tail=head;
            return;
        }
        Node temp=this.head;
        while(temp.next!=null && temp!=null){
            temp=temp.next;
        }
        temp.next=t;
        tail=temp.next;
        return;
    }

    void Print(){
        Node temp=this.head;
        while(temp!=null){
            System.out.println(temp.data);
            temp=temp.next;
        }
        return;
    }

    int indexOf(int k){
        Node temp=this.head;
        int i=0;
        while(temp!=null){
            if(temp.data==k) return i;
            i++;
            temp=temp.next;
        }
        return -1;
    }

    int sum(){
        Node temp=this.head;
        int sum=0;
        while(temp!=null){
            sum+=temp.data;
            temp=temp.next;
        }
        return sum;
    }

    void inserAtBegin(int n){
        Node begin=new Node(n);
        begin.next=head;
        head=begin;
        return;
    }
    void insertAt(int n,int k){
        if(head==null) throw new IllegalArgumentException();
        Node t=new Node(n);
        int i=1;
        Node temp=head;
        while(i<k && temp!=null){
            temp=temp.next;
            i++;
        }
        Node temp2=temp.next;
        temp.next=t;
        t.next=temp2;
        return;
    }

    boolean isEmpty(){
        if(head==null && tail==null) return true;
        return false;
    }

    void Reverse(){
        Node curr=head;
        Node prev=null;
        Node next=head.next;
        while(next!=null){
            curr.next=prev;
            prev=curr;
            curr=next;
            next=next.next;
        }
        curr.next=prev;
        head=curr;
         
    }

    void DeleteAtBegin(){
        Node temp=head;
        head=head.next;
        temp.next=null;
    }

    void DeleteAtLast(){
        Node temp=this.head;
        Node prev=null;
        while(temp.next!=null){
            prev=temp;
            temp=temp.next;
        }
        prev.next=null;
        this.tail=prev;
    }

    void DeleteAtNthNodeEnd(int k){
        Node temp=head;
        int idx=0;
        while(temp!=null){
            temp=temp.next;
            idx++;
        }
        idx=idx-k;
        temp=head;
        Node prev=null;
        while(idx>0 && temp!=null){
            idx--;
            prev=temp;
            temp=temp.next;
        }
        prev.next=temp.next;
        temp.next=null;

    }

    void DeleteAtNthNodeEndFast(int n){
        Node fast=head;
        Node curr=head;
        Node prev=null;

        while(n>1 && fast!=null){
            fast=fast.next;
            n--;
        }
        while(fast.next!=null){
            prev=curr;
            curr=curr.next;
            fast=fast.next;
        }

        if(prev==null){
            head=curr.next;
            curr.next=null;
        }
        prev.next=curr.next;
        curr.next=null;

    }

    void PrintRec(Node head){
        if(head==null) return;
        System.out.println(head.data);
        PrintRec(head.next);
    }

    void PrintReverseRec(Node head){
        if(head==null) return;
        PrintReverseRec(head.next);
        System.out.println(head.data);
    }

    
    Node ReverseRec(Node head){
        if(head==null || head.next==null) return head;

        Node rest=ReverseRec(head.next);

        Node next=head.next;
        next.next=head;
        head.next=null;

        return rest;
        
        
    }
    public static void main(String[] args) {
        LinkedList list=new LinkedList();
        list.Insertion(1);
        list.Insertion(2);
        list.Insertion(3);
        list.Insertion(4);
        list.Insertion(5);
        list.Insertion(6);
        list.Insertion(7);
        list.Insertion(8);

        // list.Print();
        // System.out.println(list.tail.data);

        // System.out.println(list.indexOf(5));
        // System.out.println(list.sum());
        // list.inserAtBegin(0);
        // list.insertAt(33, 3);
        // list.Print();
        // System.out.println(list.isEmpty());

        // list.Reverse();
        // System.out.println("Reverse:-> ");
        // list.Print();
        // list.DeleteAtBegin();
        // System.out.println("DeleteAtBegin:-> ");
        // list.Print();
        // list.DeleteAtLast();
        // System.out.println("Delete At Laast:-> ");
        // list.Print();
        // System.out.println(list.tail.data);

        // list.DeleteAtNthNodeEndFast(2);
        // list.PrintReverseRec();
        list.ReverseRec(list.head);
        // list.Print();
    }
}
