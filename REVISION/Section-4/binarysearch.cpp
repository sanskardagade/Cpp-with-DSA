#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    int l = 0;
    int r = n - 1;
    int index = -1;

    while(l<=r){
        int mid = (l+r)/2;
        if(target<arr[mid]){
            r = mid - 1;
        }
        else if(target>arr[mid]){
            l = mid + 1;
        }
        else{
            index = mid;
            break;
        }
    }
    if(index == -1)cout<<"Index not found"<<endl;
    else cout<<"Index found at index : "<<index<<endl;
    return 0;
}