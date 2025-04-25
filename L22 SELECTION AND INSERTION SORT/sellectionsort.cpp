#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[] = {6,5,4,3,2,1};
    int n = 6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // using for each loop
    //for(int ele : arr){
        //cout<<ele<<" ";
    //}
    cout<<endl;

    //selection sort
   for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        //minimum element calculation in orange box
    for(int j=i;j<n;j++){
        if(arr[j]<min){
            min = arr[j];
            mindx = j;
        }
   }
   swap(arr[i],arr[mindx]);
}
for(int ele : arr){
    cout<<ele<<" ";
}
}