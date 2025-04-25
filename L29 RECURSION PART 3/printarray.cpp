#include<iostream>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}
int main(){
    int arr[] = {1,3,5,7,9,2,4,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
}