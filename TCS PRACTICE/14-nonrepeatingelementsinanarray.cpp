#include<bits/stdc++.h>
using namespace std;

int nonrepeating(vector<int>& arr){
    map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++){
        if(it->second==1){
            cout<<it->first<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nonrepeating(arr);
}