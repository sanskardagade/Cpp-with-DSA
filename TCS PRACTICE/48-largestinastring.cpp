#include<bits/stdc++.h>
using namespace std;

string largestWord(string s){
    string word = "";
    string maxWord = "";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            word += s[i];
        }
        else{
            if(word.length() > maxWord.length()){
                maxWord = word;
            }
            word = "";
        }
    }
    if(word.length()>maxWord.length()){
        maxWord = word;
    }
    return maxWord;
}


int main(){
    string s;
    getline(cin,s);
    cout<<largestWord(s);
    return 0;
}