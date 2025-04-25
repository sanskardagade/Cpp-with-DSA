#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows/columns :";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpose in the same matrix 
    for(int i=0;i<=m-1;i++){ //row
        for(int j=i+1;j<=m-1;j++){ //column
            // swapping of i,j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        cout<<endl;
    }

    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            if 
        }
    }
    for(int i=0;i<=m-1;i++){ //rows
        for(int j=0;j<=m-1;j++){//columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}