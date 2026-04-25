#include<bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n){
    int decimal = 0;
    int base = 1;

    while(n>0){
        int lastDigit = n % 10;
        n = n / 10;

        decimal += lastDigit * base;
        base = base * 2;
    }
    return decimal;
}

int main(){
    int n;
    cin >> n;

    cout << BinaryToDecimal(n);

    return 0;
}