#include<bits/stdc++.h>
using namespace std;

int frequency(string s){
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++){
        if(it->second > 1){
            cout<<it->first<< " - "<<it->second << " ";
        }
    }
}

int main(){
    string s;
    cin>>s;
    frequency(s);
}