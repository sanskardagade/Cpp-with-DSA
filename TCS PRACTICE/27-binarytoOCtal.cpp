#include<bits/stdc++.h>
using namespace std;

int BinaryToDecimal(string s){
    int decimal = 0;
    for(int i=0;i<s.size();i++){
        decimal = decimal * 2 + (s[i] - '0');
    }
    return decimal;
}

int DecimaltoOctal(int n){
    int octal = 0;
    int base = 1;
    while(n>0){
        int rem = n % 8;
        n = n / 8;
        octal += rem * base;
        base *= 10;
    }
    return octal;
}



int main(){
    string s;
    cin >> s;

    int decimal = BinaryToDecimal(s);
    cout << decimal<<endl; 
    cout<< DecimaltoOctal(decimal);

    return 0;
}