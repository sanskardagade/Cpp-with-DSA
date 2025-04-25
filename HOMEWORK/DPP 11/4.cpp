// Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main() {
    int arr[6] = {12,12,10,9,8,7}
    bool flag = false;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if (arr[i]=arr[j]){
                flag = true;
                cout<<arr[i];
                break;

            }
        }
    }
    if(flag==false) cout<<"no duplicates found";
    return 0;

}