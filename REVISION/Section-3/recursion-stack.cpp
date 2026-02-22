#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

void rec(int n) {
    // base case
    if(n==0) return;

    // recursive case
    rec(n-1);

    cout << n << " ";
}

int main() {
    rec(3);

    return 0;
}