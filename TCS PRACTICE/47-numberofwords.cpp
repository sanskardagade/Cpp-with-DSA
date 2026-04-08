#include<bits/stdc++.h>
using namespace std;

int countWords(string s){
    int count = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' ' && (i==0 || s[i-1]==' '))count++;
    }
    return count;
}

int main(){
    string s;
    getline(cin, s);
    cout << countWords(s);
    return 0;
}