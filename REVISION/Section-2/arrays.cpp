#include<iostream>
#include<vector>
using namespace std;
int main(){
    string name = "Sanskar";
    cout<<name<<endl;

    int arr[5] = {1,2,3,4,5};
    cout<<arr[1]<<endl;
    cout<<arr[3]<<endl;


    cout<<sizeof(arr)<<endl;

    cout<<sizeof(arr)/sizeof(int)<<endl;


    vector<int>v = {1,2,3,4,5,6};
    cout<<v[0]<<endl;

}