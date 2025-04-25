#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    // cout<<st.size()<<endl;  //0
    st.push(10);            
    st.push(20);
    st.push(30);
    st.push(40);
    // cout<<st.size()<<endl;  //4
    // st.pop();
    // cout<<st.size()<<endl;  //3
    // cout<<st.top()<<endl;   //30
    st.push(50);
    //printing in reverse order
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    // we will  use extra stack
    stack<int>temp;
    while(st.size()>0){
        //cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    // putting elements back from temp to st 
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}