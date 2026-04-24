// #include<bits/stdc++.h>
// using namespace std;

// void symmetric(vector<pair<int,int>>& arr){
//     int n = arr.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i].first == arr[j].second && arr[i].second == arr[j].first){
//                 cout<<"("<<arr[i].first<<","<<arr[i].second<<")";
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<pair<int,int>>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i].first>>arr[i].second;
//     }
//     symmetric(arr);
// }


#include<bits/stdc++.h>
using namespace std;

void symmetric(vector<pair<int,int>>& arr){
    map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        int a = arr[i].first;
        int b = arr[i].second;

        if(mp.find(b) != mp.end() && mp[b] == a){
            cout << "(" << a << "," << b << ") ";
        }
        else{
            mp[a] = b;
        }
    }
}


int main(){
    int n;
    cin >> n;

    vector<pair<int,int>> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    symmetric(arr);
}