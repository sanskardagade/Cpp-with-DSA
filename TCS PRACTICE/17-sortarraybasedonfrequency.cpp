#include<bits/stdc++.h>
using namespace std;

void sortbasedfrequency(vector<int> & arr){
    int n = arr.size();
    map<int,int>mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(mp[arr[i]]<mp[arr[j]] || (mp[arr[i]] == mp[arr[j]] && arr[i] > arr[j])){
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sortbasedfrequency(arr);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}