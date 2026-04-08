#include<bits/stdc++.h>
using namespace std;

string removeBrackets(string s){
    string result = "";

    for(int i = 0; i < s.length(); i++){
        if(s[i] != '(' && s[i] != ')'){
            result += s[i];
        }
    }

    return result;
}

int main(){
    string s;
    cin >> s;

    cout << removeBrackets(s);
}