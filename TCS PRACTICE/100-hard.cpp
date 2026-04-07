#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    string word = "", answer = "-1";
    int globalMax = 1;

    for(int i = 0; i <= s.length(); i++){
        if(i < s.length() && s[i] != ' '){
            word += s[i];
        } else {
            // process word
            int freq[256] = {0};
            int currMax = 0;

            for(int j = 0; j < word.length(); j++){
                freq[word[j]]++;
                currMax = max(currMax, freq[word[j]]);
            }

            if(currMax > globalMax){
                globalMax = currMax;
                answer = word;
            }

            word = ""; // reset
        }
    }

    return answer;
}

int main(){
    string s;
    getline(cin, s);

    cout << solve(s);
}