#include<bits/stdc++.h>
using namespace std;

void replacementByRank(vector<int>& arr){
    int n = arr.size();
    map<int,int>mp;
    vector<int>temp(arr.begin(),arr.end());
    sort(temp.begin(),temp.end());
    int rank = 1;
    for(int i=0;i<n;i++){
        if(mp.find(temp[i]) == mp.end()){
            mp[temp[i]] = rank++;
        }
    }
    
    for(int i=0;i<n;i++){
        arr[i] = mp[arr[i]];
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    replacementByRank(arr);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}