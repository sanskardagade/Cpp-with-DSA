#include<bits/stdc++.h>
using namespace std;

int index(vector<int>& arr){
    int n = arr.size();
    int total = 0;
    for(int i=0;i<n;i++){
        total += arr[i];
    }
    int leftSum = 0;
    int rightSum = total;
    for(int i=0;i<n;i++){
        rightSum -= arr[i];

        if(rightSum == leftSum)return i;

        leftSum += arr[i];
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<index(arr);
}


// #include<bits/stdc++.h>
// using namespace std;

// void equilibriumDetails(vector<int>& arr){
//     int n = arr.size();

//     int total = 0;
//     for(int i = 0; i < n; i++){
//         total += arr[i];
//     }

//     int leftSum = 0;

//     for(int i = 0; i < n; i++){
//         int rightSum = total - leftSum - arr[i];

//         if(leftSum == rightSum){
//             cout << "Equilibrium Index: " << i << endl;

//             cout << "Left Array: ";
//             for(int j = 0; j < i; j++){
//                 cout << arr[j] << " ";
//             }
//             cout << endl;

//             cout << "Right Array: ";
//             for(int j = i+1; j < n; j++){
//                 cout << arr[j] << " ";
//             }
//             cout << endl;

//             return;
//         }

//         leftSum += arr[i];
//     }

//     cout << -1;
// }

// int main(){
//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     equilibriumDetails(arr);

//     return 0;
// }