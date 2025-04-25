#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows in the first matrix :";
    cin>>m;
    int n;
    cout<<"Enter columns in the first matrix :";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
    }
}
