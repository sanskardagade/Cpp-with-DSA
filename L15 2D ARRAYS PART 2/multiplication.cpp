#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows in the first matrix :";
    cin>>m;
    int n;
    cout<<"Enter columns in the first matrix :";
    cin>>n;

    int p;
    cout<<"Enter rows in the second matrix :";
    cin>>p;
    int q;
    cout<<"Enter columns in the second matrix :";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"Enter elements of the 1st matrix :";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter elements of the 2nd matrix :";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        // resultant matrix 
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                // res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + ----
                for(int k=0;k<p;k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        cout<<endl;
        //print
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{// n!=p
        cout<<"The matrices cannot be multiplied ";
    }
}