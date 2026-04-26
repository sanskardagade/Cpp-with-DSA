#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    map<char, int> mp;

    // count frequency
    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }

    char result;
    int maxFreq = 0;

    // find max occurring character
    for(map<char, int>::iterator it = mp.begin(); it != mp.end(); it++){
        if(it->second > maxFreq){
            maxFreq = it->second;
            result = it->first;
        }
    }

    cout << result;

    return 0;
}