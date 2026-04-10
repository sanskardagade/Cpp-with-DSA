#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int>&arr1 ,vector<int>& arr2){
    map<int,int>mp;
    for(int i=0;i<arr2.size();i++){
        mp[arr2[i]]++;
    }

    for(int i=0;i<arr1.size();i++){
        if(mp[arr1[i]]==0)return false;
    }
    return true;
}

int main(){
    int n1, n2;
    cin >> n1;

    vector<int> arr1(n1);
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    cin >> n2;

    vector<int> arr2(n2);
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    if(isSubset(arr1, arr2)){
        cout << "arr1 is subset of arr2";
    } else {
        cout << "arr1 is not subset of arr2";
    }

    return 0;
}