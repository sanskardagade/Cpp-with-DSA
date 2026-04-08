#include<bits/stdc++.h>
using namespace std;

void nonRepeating(string s){
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(int i=0;i<s.size();i++){
        if(mp[s[i]] == 1){
            cout<<s[i]<<" ";
        }
    }
}
int main(){
    string s;
    cin >> s;
    nonRepeating(s);
    return 0;
}