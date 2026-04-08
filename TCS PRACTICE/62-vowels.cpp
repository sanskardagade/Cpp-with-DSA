#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}
int main(){
    string s;
    getline(cin, s);
    int vowels = 0, consonants = 0, spaces = 0;
    for(int i = 0; i < s.length(); i++){
        if(isVowel(s[i])){
            vowels++;
        }
        else if((s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= 'A' && s[i] <= 'Z')){
            consonants++;
        }
        else if(s[i] == ' '){
            spaces++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "White spaces: " << spaces;
    return 0;
}