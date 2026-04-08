#include<bits/stdc++.h>
using namespace std;

string nextAlphabet(string s){
    for(int i=0;i<s.size();i++){
        if(s[i] == 'z')s[i] = 'a';
        else if(s[i] == 'Z')s[i] = 'A';
        else if((s[i]>='a' && s[i]<='y') || s[i]>='A' && s[i]<='Z')s[i] = s[i] + 1;
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    cout << nextAlphabet(s);
    return 0;
}