//Given an array of strings arr[] with all strings in lowercase.
// Sort given strings using Bubble Sort and display the sorted array.

#include<iostream>
#include<string>
using namespace std;
int main(){
    char arr[][20] = {"physicswallah", "quiz", "practice", "pwskills","coding" };
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
    cout<<arr[i]<<endl;
    }
    return 0;

}

