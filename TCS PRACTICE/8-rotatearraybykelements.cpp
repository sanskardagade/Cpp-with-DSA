// RIGHT END
// #include<bits/stdc++.h>
// using namespace std;

// void rotatebyk(vector<int>arr,int k){
//     int n = arr.size();
//     k = k % n;
//     reverse(arr.begin(),arr.end());
//     reverse(arr.begin(),arr.begin()+k);
//     reverse(arr.begin()+k,arr.end());
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int k;
//     cin>>k;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     rotatebyk(arr,k);
// }


//LEFT END

#include<bits/stdc++.h>
using namespace std;

void rotatebyk(vector<int>arr,int k){
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotatebyk(arr,k);
}