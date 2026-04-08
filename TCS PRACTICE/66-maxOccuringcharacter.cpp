#include<bits/stdc++.h>
using namespace std;
char maxOccuringChar(string s){
    int freq[256] = {0};
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
    }
    int maxFreq = 0;
    char ans = 0;

    for(int i=0;i<s.size();i++){
        if(freq[s[i]]>maxFreq){
            maxFreq = freq[s[i]];
            ans = s[i];
        }
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    cout << maxOccuringChar(s);
    return 0;
}