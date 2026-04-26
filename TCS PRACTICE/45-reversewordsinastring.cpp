#include<bits/stdc++.h>
using namespace std;

// string reverseWords(string s){
//     int i = s.size()-1;
//     string ans = "";
//     while(i>=0){
//         while(i>=0 && s[i]==' ')i--;
//         if(i<0)break;
//         int j = i;
//         while(i>=0 && s[i]!=' ')i--;
//         if(ans.length() == 0){
//             ans += s.substr(i+1,j-i);
//         }
//         else{
//             ans += " "+ s.substr(i+1,j-i);
//         }
//     }
//     return ans;
// }

string reverseWords(string s){
    int i = s.size() - 1;
    string ans = "";
    while(i>=0){
        while(i>=0 && s[i]==' ')i--;
        if(i<0)break;
        int j = i;
        while(i>=0 && s[i]!=' ')i--;
        if(ans.size()==0){
            ans += s.substr(i+1,j-i);
        }
        else{
            ans += " "+ s.substr(i+1,j-i);
        }
    }
}

int main(){
    string s;
    getline(cin,s);
    cout<<reverseWords(s);
    return 0;
}