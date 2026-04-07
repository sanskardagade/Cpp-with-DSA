#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cin >> n;

    int temp = n;
    int sum = 0;

    while(temp > 0){
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == n){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}