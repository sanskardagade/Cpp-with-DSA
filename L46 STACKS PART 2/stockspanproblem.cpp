#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // By stack  POP->ANS->PUSH    SC = O(n)    TC = O(n) traversing forward
    int ssp[n];
    int count = 0;
    stack<int>st;
    ssp[0] =1;
    st.push(arr[0]);
    for(int i=1;i<=n-1;i++){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ssp[i] = -1;
        else{
            ssp[i] = st.top();
            count++;
            }
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<count<<" ";
    }
    cout<<endl;

}