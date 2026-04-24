// #include<bits/stdc++.h>
// using namespace std;

// int sortLargest(vector<int>& arr){
//     int n = arr.size();
//     sort(arr.begin(),arr.end());
//     return arr[n-1];
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<sortLargest(arr);
//     cout<<endl;
// }


#include<bits/stdc++.h>
using namespace std;
int LargestBrute(int arr[],int n){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i])max = arr[i];
    }
    return max;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<LargestBrute(arr,n);
    cout<<endl;
}