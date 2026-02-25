#include<iostream>
using namespace std;


int partition(int  arr[],int l,int r,int pivot){
    int start = l;
    for(int i=l;i<=r;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[start]);
            start++;
        }
    }
    return start - 1;
}
void quickSort(int arr[],int l,int r){
    //base case
    if(l>=r)return;
    int pivot = arr[r];
    int pivotIndex = partition(arr,l,r,pivot);

    //left part sort 
    quickSort(arr,l,pivotIndex-1);
    quickSort(arr,pivotIndex+1,r);
}



int main(){
    int arr[] = {100,82,91,73,66,55,44,33,22,11,1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,arr_size-1);
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}