#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"ENTER a:- ";
    cin>>a;
    cout<<"ENTER b:- ";
    cin>>b;
    //Before Swapping two numbers....
    cout<<"a = "<<a<<" & b = "<<b;
    temp=a;
    a=b;
    b=temp;
    //After Swapping two numbers....
    cout<<"a = "<<a<<" & b = "<<b;
}
