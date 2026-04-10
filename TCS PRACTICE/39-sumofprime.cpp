#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i == 0)return false;
    }
    return true;
}

bool canbeWritten(int n){
    for(int i=2;i<=n/2;i++){
        if(isPrime(i) && isPrime(n-i)){
            cout << i << " + " << (n - i) << endl;
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    if(canbeWritten(n)){
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}