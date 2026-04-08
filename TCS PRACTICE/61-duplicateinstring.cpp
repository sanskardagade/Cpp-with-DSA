#include<bits/stdc++.h>
using namespace std;

string rempveDuplicates(string s){
    int freq[256] = {0};
    string ans = "";
    for(int i=0;i<s.size();i++){
        if(freq[s[i]]==0){
            ans += s[i];
            freq[s[i]] = 1;
        }
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    cout << rempveDuplicates(s);
    return 0;
}