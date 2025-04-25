// Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int multi = 1;
    for(int i=0;i<=n-1;i++){
        multi = multi * arr[i];
    }
    cout<<multi;

}