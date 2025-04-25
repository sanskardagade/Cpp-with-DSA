#include<iostream>
#include<string>
using namespace std;
void removechar(int ans,int original,int idx){
    if(idx==arr.length()){
        cout<<ans;
        return;
    }
    int no = original[idx];
    if(no=='1') removechar(ans,original,idx+1);
    else removechar(ans+int,original,idx+1);
}
int main(){
    int arr ={1,2,1,2,3,6};
    removechar("",arr,0);
}