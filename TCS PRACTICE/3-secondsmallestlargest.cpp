#include<bits/stdc++.h>
using namespace std;

// void smallestLargest(int arr[],int n){
//     if(n==0||n==1)cout << -1 << " " << -1 << endl;
//     sort(arr,arr+n);
//     int small = arr[1];
//     int large = arr[n-2];
//     cout << "Second smallest is " << small << endl;
//     cout << "Second largest is " << large << endl;
 
// }

// void smallestLargest(int arr[], int n){
//     if(n <= 1){
//         cout << -1 << " " << -1 << endl;
//         return;
//     }

//     sort(arr, arr+n);

//     int small = -1, large = -1;
//     for(int i = 1; i < n; i++){
//         if(arr[i] != arr[0]){
//             small = arr[i];
//             break;
//         }
//     }
//     for(int i = n-2; i >= 0; i--){
//         if(arr[i] != arr[n-1]){
//             large = arr[i];
//             break;
//         }
//     }

//     cout << "Second smallest is " << small << endl;
//     cout << "Second largest is " << large << endl;
// }


void smallestLargest(int arr[],int n){
    if(n<=1){
        cout << -1 << " " << -1 << endl;
        return;
    }
    sort(arr,arr+n);
    int small = -1;
    int large = -1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[0]){
            small = arr[i];
            break;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i] != arr[n-1]){
            large = arr[i];
            break;
        }
    }
    cout << "Second smallest is " << small << endl;
    cout << "Second largest is " << large << endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    smallestLargest(arr,n);
    cout<<endl;
}