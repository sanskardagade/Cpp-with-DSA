// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string text,pattern;
//     cin>>text>>pattern;
//     int pos = text.find(pattern);
//     if(pos!=string::npos){
//         cout<<pos;
//     }
//     else{
//         cout<<-1;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int findSubstring(string text, string pattern){
    int n = text.size();
    int m = pattern.size();
    for(int i=0;i<n-m;i++){
        int j = 0;
        while(j<m && text[i+j] == pattern[j])j++;
        if(j==m)return i;
    }
    return -1;
}

int main(){
    string text, pattern;
    cin >> text >> pattern;
    cout << findSubstring(text, pattern);
    return 0;
}