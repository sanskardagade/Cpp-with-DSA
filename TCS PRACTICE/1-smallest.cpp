// #include<bits/stdc++.h>
// using namespace std;
// int sortArray(vector<int>& arr){
//     sort(arr.begin(),arr.end());
//     return arr[0];
// }
// int main(){ 
//     int n;
//     cin >> n;  // size of array
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];  // input elements
//     }
//     cout << sortArray(arr);
//     return 0;

// }



#include<bits/stdc++.h>
using namespace std;

int smallestElement(int arr[],int n){
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i])min = arr[i];
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<smallestElement(arr,n);
    cout<<endl;

}
