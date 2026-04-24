#include<bits/stdc++.h>
using namespace std;

void Frequency(vector<int>& arr,int n){
    map<int,int>m;
    for(int i = 0; i < n; i++) {
        m[arr[i]]++;
    }
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);  // vector instead of array

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Frequency(arr, n);

    return 0;
}



