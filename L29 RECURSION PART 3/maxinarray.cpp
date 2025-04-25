#include<iostream>
#include<climits>
using namespace std;
int maxinarray(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxinarray(arr,n,idx+1));
}
int main(){
    int arr[]= {2,4,6,8,1,3,5,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxinarray(arr,n,0);
}