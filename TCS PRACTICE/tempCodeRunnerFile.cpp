#include<bits/stdc++.h>
using namespace std;

void symmetric(vector<pair<int,int>>& arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i].first == arr[j].second)&&(arr[i].second == arr[j].first)){
                cout<<"("<<arr[i].first<<","<<arr[j].second<<")";
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    symmetric(arr);
}