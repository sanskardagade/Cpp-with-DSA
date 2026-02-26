#include<iostream>
using namespace std;

int lowerBound(int arr[],int n,int target){
    int l = 0;
    int r = n - 1;
    int index = n;

    while(l<=r){
        int mid = (l+r)/2;
        if(target<=arr[mid]){
            index = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1; 
        }
    }
    return index;
}

int upperBound(int arr[],int n,int target){
    int l = 0;
    int r = n - 1;
    int index = n;

    while(l<=r){
        int mid = (l+r)/2;
        if(target<arr[mid]){
            index = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1; 
        }
    }
    return index;
}


int main(){

}