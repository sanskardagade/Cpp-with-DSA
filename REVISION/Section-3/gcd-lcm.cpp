#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

int gcd(int a, int b) {
    // base case
    if (b==0) return a;

    // recursive case
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}

int main() {
    cout<<gcd(12, 20)<<endl; // 4
    cout<<lcm(12, 20)<<endl; // 60

    return 0;
}