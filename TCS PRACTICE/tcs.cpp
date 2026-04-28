#include<bits/stdc++.h>
using namespace std;

void helper(int n){
    stack<char>st;
    st.push('z');
    st.push('y');
    st.push('x');
    st.push('w');
    st.push('v');
    st.push('t');
    st.push('s');
    st.push('r');
    st.push('q');
    st.push('p');
    st.push('n');
    st.push('m');
    st.push('l');
    st.push('k');
    st.push('j');
    st.push('h');
    st.push('g');
    st.push('f');
    st.push('d');
    st.push('c');
    st.push('b');
    for(int i=0;i<n;i++){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    int n;
    cin>>n;
    if(n<0)cout<<"Invalid input";
    if(n==21)cout<<"b c d e f g h j k l m n p q r s t v w x y z";
    else{
        helper(n);
    }
}