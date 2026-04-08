#include<bits/stdc++.h>
using namespace std;

void frequencyOfCharacters(string s){
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    
    for(map<char,int>::iterator it=mp.begin(); it!=mp.end();it++){
        cout<<it->first<<" - "<<it->second<<endl;
    }
}

int main(){
    string s;
    cin>>s;
    frequencyOfCharacters(s);
    return 0;
}