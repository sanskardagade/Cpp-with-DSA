
#include <iostream>
#include <bits/stdc++.h> // STL
using namespace std;

void printFactors(int n) {
    for(int i=1;i<=sqrt(n);i++) {
        if(n%i==0) {
            cout<<i<<" ";
            if(i!=(n/i)) cout<<n/i<<" ";
        }
    }
    cout<<endl;
}

int main() {
    printFactors(12); // 1 2 3 4 6 12
    printFactors(25); // 1 5 25

    return 0;
}