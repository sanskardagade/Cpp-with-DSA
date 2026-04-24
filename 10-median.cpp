#include<bits/stdc++.h>
using namespace std;

void getMedian(int arr[],int n){
    sort(arr,arr+n);
    if(n%2==0){
        int a = (n/2) -1;
        int b = n/2;
        cout<<(double)(arr[a] + arr[b])/2;
    }
    else{
        arr[n/2];
    }
}
int main() {
    int arr[] = {4, 7, 1, 2, 5, 6};
    int n = 6;
    cout << "The median of the array is: ";
    getMedian(arr, n);  // Function call to calculate and print the median
    return 0;
}