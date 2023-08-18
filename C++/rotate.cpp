#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>k%n;
    int ans[n];
    int j=0;
    for(int i=n-k; i<n; i++){
        ans[j++]=arr[i];
    }
    for(int i=0; i<n-k; i++){
        ans[j++]=arr[i];
    }
    
    for(int ele:ans){
        cout<<ele<<",";
    }
}
