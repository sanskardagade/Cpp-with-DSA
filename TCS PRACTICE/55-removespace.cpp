#include<bits/stdc++.h>
using namespace std;

string removeSpaces(string s){
    string result = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            result += s[i];
        }
    }
    return result;
}
int main(){
    string s;
    getline(cin, s);
    cout << removeSpaces(s);
    return 0;
}