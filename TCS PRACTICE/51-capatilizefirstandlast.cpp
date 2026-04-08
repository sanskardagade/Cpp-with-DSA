#include<bits/stdc++.h>
using namespace std;

string capatilize(string s){
    int n = s.size();
    for(int i=0;i<n;i++){
        if(i==0 || s[i-1]==' '){
            if(s[i]>'a' && s[i]<='z'){
                s[i] = s[i]-32;
            }
        }
        if(i==n-1 || s[i+1]==' '){
            if(s[i]>'a' && s[i]<='z'){
                s[i] = s[i] - 32;
            }
        }
    }   
    return s;
}           

int main(){
    string s;
    getline(cin, s);
    cout << capatilize(s);
    return 0;
}