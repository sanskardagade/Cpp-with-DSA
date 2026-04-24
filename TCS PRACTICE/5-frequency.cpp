// #include<bits/stdc++.h>
// using namespace std;

// void Frequency(vector<int>& arr,int n){
//     map<int,int>m;
//     for(int i = 0; i < n; i++) {
//         m[arr[i]]++;
//     }
//     for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
//         cout<<it->first<<" "<<it->second<<endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);  // vector instead of array

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     Frequency(arr, n);

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[],int n){
    vector<bool>visited(n,false);
    for(int i=0;i<n;i++){
        if(visited[i]==true){
            continue;
        }
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

int main() {
    
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the function to count frequencies
    countFreq(arr, n);
    return 0;
}