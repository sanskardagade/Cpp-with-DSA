#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;
    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }
    if(index == -1)cout<<"Index not found"<<endl;
    else cout<<"Index found at index"<<index<<endl;
}