#include<bits/stdc++.h>
using namespace std;

void rearrange(vector<int>& arr){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    reverse(arr.begin()+n/2,arr.end());
    for(int i=0;i<n;i++){
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
    rearrange(arr);

}