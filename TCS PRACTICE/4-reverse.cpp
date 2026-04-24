#include<bits/stdc++.h>
using namespace std;

void reverseArr(vector<int>&arr){
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArr(arr);
    cout<<endl;
}

