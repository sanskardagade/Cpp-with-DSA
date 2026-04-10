#include<bits/stdc++.h>
using namespace std;

int power(int base,int exp){
    int result = 1;
    for(int i=0;i<exp;i++){
        result *= base;
    }
    return result;
}

bool isArmstrong(int n){
    int original = n;
    int digits = 0;
    int temp = n;

    while(temp>0){
        digits++;
        temp = temp / 10;
    }

    int sum = 0;
    temp = n;

    while(temp>0){
        int digit = temp % 10;
        sum += power(digit,digits);
        temp /= 10;
    }
    return sum == original;
}

int main(){
    int n;
    cin >> n;

    if(isArmstrong(n)){
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}