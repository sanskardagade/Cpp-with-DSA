#include<iostream>
using namespace std;


void merge(int arr[],int l,int mid,int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int A[n1];
    int B[n2];

    for(int i=0;i<n1;i++){
        A[i] = arr[l+i];
    }

    for(int j=0;j<n2;j++){
        B[j] = arr[mid+1+j];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while(i<n1 && j<n2){
        if(A[i]<=B[j]){
            arr[k] = A[i];
            i++;
        }
        else{
            arr[k] = B[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = A[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = B[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int l,int r){
    //base case
    if(l>=r)return;
    int mid = (l+r)/2;
    //left part sort
    mergeSort(arr,l,mid);
    //right part sort
    mergeSort(arr,mid+1,r);
    //merge
    merge(arr,l,mid,r);
}

int main(){
    int arr[] = {12,11,13,5,6,7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,arr_size-1);

    cout<<"Sorted array:"<<endl;
    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    return 0;
}