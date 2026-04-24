#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& arr,int target){
    int lo = 0;
    int hi = arr.size() - 1;
    while(lo<=hi){
        int mid = lo + (hi - lo) / 2;
        if(target == arr[mid])return mid;
        else if(target>arr[mid])lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<BinarySearch(arr,target);
}