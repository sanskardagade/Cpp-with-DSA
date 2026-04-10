#include<bits/stdc++.h>
using namespace std;

int octalToDecimal(int n){
    int decimal = 0;
    int base = 1;  // 8^0

    while(n > 0){
        int lastDigit = n % 10;
        n = n / 10;

        decimal += lastDigit * base;
        base *= 8;
    }

    return decimal;
}

int main(){
    int n;
    cin >> n;

    cout << octalToDecimal(n);

    return 0;
}