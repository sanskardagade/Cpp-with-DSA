#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // By stack  POP->ANS->PUSH    SC = O(n)    TC = O(n) traversing forward
    //previous greater element index array
    int pgi[n];
    stack<int>st;
    pgi[0] = 1;
    st.push(0);
    for(int i=1;i<=n-1;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0) pgi[i] = -1;
        else pgi[i] = st.top();
        pgi[i] = i - pgi[i];
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
    cout<<endl;

}