#include<bits/stdc++.h>
using namespace std;

string keepAlphabets(string s){
    string ans = "";
    for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))ans+=s[i];
    }
    return ans;
}
int main(){
    string s;
    getline(cin, s);
    cout << keepAlphabets(s);
    return 0;
}