#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}
string removeVowels(string s){
    string result = "";
    for(int i = 0; i < s.length(); i++){
        if(!isVowel(s[i])){
            result += s[i];
        }
    }
    return result;
}
int main(){
    string s;
    getline(cin, s);
    cout << removeVowels(s);
    return 0;
}