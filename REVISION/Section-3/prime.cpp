#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

bool isPrime(int n) {
    if(n<2) return false;

    for(int i=2;i*i<=n;i++) {
        if(n%i==0) return false;
    }

    return true;
}

int main() {
    cout<<isPrime(1)<<endl; // false
    cout<<isPrime(2)<<endl; // true
    cout<<isPrime(3)<<endl; // true
    cout<<isPrime(17)<<endl; // true
    cout<<isPrime(170)<<endl; // false
    return 0;
}