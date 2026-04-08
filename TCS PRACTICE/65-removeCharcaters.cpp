#include<bits/stdc++.h>
using namespace std;

string removeChars(string str1,string str2){
    int freq[256] = {0};
    for(int i= 0;i<str2.length();i++){
        freq[str2[i]]=1;
    }
    string ans = "";
    for(int i=0;i<str1.size();i++){
        if(freq[str1[i]]==0)ans += str1[i];
    }
    return ans;
}
int main(){
    string str1, str2;
    cin >> str1 >> str2;
    cout << removeChars(str1, str2);
    return 0;
}