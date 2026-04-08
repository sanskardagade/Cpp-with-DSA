#include<bits/stdc++.h>
using namespace std;

int sumOfNumbers(string s){
    int sum = 0;
    int num = 0;

    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            num = num * 10 + (s[i] - '0');
        }
        else{
            sum += num;
            num = 0;
        }
    }
    sum += num;
    return sum;
}

int main(){
    string s;
    cin >> s;
    cout << sumOfNumbers(s);
    return 0;
}