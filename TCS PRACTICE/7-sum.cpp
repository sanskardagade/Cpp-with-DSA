#include<bits/stdc++.h>
using namespace std;
int ans(vector<int>& arr){
    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< ans(arr);
}