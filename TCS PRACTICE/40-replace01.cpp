// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;

//     for(int i = 0; i < s.length(); i++){
//         if(s[i] == '0'){
//             s[i] = '1';
//         }
//     }
//     cout << s;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int replacezero(int n){
    if(n==0)return 0;
    int result = 0;
    int place = 1;
    while(n>0){
        int digit = n % 10;
        if(digit == 0)digit = 1;
        result += digit * place;
        place *= 10;
        n /= 10;
    }
    return result;
}

